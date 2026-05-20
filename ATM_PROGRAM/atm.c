#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void printWelcomeMessage(void);    // display welcome screen
void startUpMenu(void);            // display ATM menu
int login();                       // verify user PIN
int accountInfo(int i);            // show account details
int checkBalance();                // display account balance
int deposit();                     // add money to account
int withdraw();                    // withdraw money
int transfer();                    // transfer funds
int printReceipt();                // print transaction receipt
void process_delay(int seconds);   // create delay effect
int generatePin();                 // generate new PIN
int quickCash();                   // quick cash withdrawal

void process_delay(int seconds){
    time_t start = time(NULL);
    while (difftime(time(NULL), start) < seconds);
}

void loadingScreen(){

    system("cls");

    printf("\n\n\t\tProcessing / ");

    for(int i = 0; i < 5; i++){

        printf(".");
        fflush(stdout);

        process_delay(0.8);
    }

    process_delay(2);

    system("cls");
}

typedef struct { // structure to hold account information
    int accNo;
    char name[30];
    int pin;
    int balance;
}Account;

Account user[3] = { // predefined user accounts
    {1001, "John", 1234, 5000.00},
    {1002, "Alice", 4321, 8200.50},
    {1003, "David", 9876, 12000.75}
};

int main(){
    extern int pin;
    printWelcomeMessage();    
    return 0;
}

    
void printWelcomeMessage(void){
    static int options;

    printf("==================================================================\n");
    printf("\t\t\tWelcome to the ATM!\n");
    printf("Please select an option to continue\n");
    printf("1. Generate PIN\t\t2. Quick Cash \t\t 3.Insert Card\n");
    printf("==================================================================\n"); 

    printf("Enter your choice: ");
    scanf("%d", &options);
    
    if (options >= 1 && options <= 3){
        switch (options){
            case 1:
                generatePin();
                break;
            case 2:
                quickCash();
                break;
            case 3:
                printf("Please insert your card...\n");
                process_delay(2);
                startUpMenu();
                break;
            default:
                printf("Invalid option. Please try again.\n");
                return;
        }
    }

}

void startUpMenu(void){
    
    int choice;
    do{

        printf("\n\n");
        loadingScreen();
        printf("\n========================\n"
            "        ATM MENU\n"
            "========================\n"
            "1. Check Balance\n"
            "2. Deposit\n"
            "3. Withdraw\n"
            "4. Transfer\n"
            "5. print Receipt\n"
            "6. Exit\n"
            "========================\n"
            "Enter your choice: ");

            scanf("%d", &choice);

            switch (choice){
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                transfer();
                break;
            case 5:
                printReceipt();
                break;
            case 6:
                printf("Thank you for using ATM. Goodbye!\n");
                process_delay(3);
                system("cls");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
            }

    }while(choice != 6);
}


int login(){
    int pin;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    
    for(int i = 0; i < 3; i++){

        if(pin == user[i].pin){

            printf("Welcome, %s!\n", user[i].name);

            accountInfo(i);

            return i;
        }
    }
    printf("Invalid PIN. Please try again.\n");
    return -1;
}

int accountInfo(int i){
    printf("Account Number: %d\n", user[i].accNo);
    printf("Account Holder: %s\n", user[i].name);
    return 0;
}

int checkBalance(){

    int index;

    printf("Checking balance...\n");

    index = login();

    if(index != -1){

        printf("Current Balance : %.2f\n",user[index].balance);
    }

    process_delay(5);

    return 0;
}

int deposit(){

    int pin;
    float amount;
    int found = 0;

    printf("Processing deposit...\n");

    printf("Enter PIN: ");
    scanf("%d", &pin);

    for(int i = 0; i < 3; i++){

        if(pin == user[i].pin){

            found = 1;

            printf("Welcome, %s\n", user[i].name);

            printf("Current Balance: %d\n", user[i].balance);

            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            user[i].balance += amount;

            printf("Amount Deposited Successfully!\n");

            printf("Updated Balance: %d\n", user[i].balance);

            break;
        }
    }

    if(found == 0){
        printf("Invalid PIN!\n");
    }

    process_delay(5);
    return 0;
}

int withdraw(){

    int pin;
    float amount;
    int found = 0;
    int mimumAmount = 100;

    printf("Processing withdrawal...\n");

    printf("Enter PIN: ");
    scanf("%d", &pin);

    for(int i = 0; i < 3; i++){

        if(pin == user[i].pin){

            found = 1;

            printf("Welcome, %s\n", user[i].name);

            printf("Current Balance: %d\n", user[i].balance);

            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if(amount >= 100 && amount <= user[i].balance && ((int)amount % 100) == 0 && amount == (int)amount){

                user[i].balance -= amount;

                printf("Withdrawal Successful!\n");

                printf("Please take your cash.\n");
                printf("do you want to print receipt? (1 for yes, 0 for no): ");
                int printChoice;
                scanf("%d", &printChoice);
                if(printChoice == 1){
                    printReceipt();
                }else{
                    printf("Thank you for using our ATM service!\n");
                }

            }else{
                printf("Insufficient Balance!\n");
            }

            break;
        }
    }

    if(found == 0){

        printf("Invalid PIN!\n");
    }

    process_delay(5);

    return 0;
}

int transfer(){

    int senderPin;
    int receiverAccNo;
    float amount;

    int senderFound = 0;
    int receiverFound = 0;

    int senderIndex = -1;
    int receiverIndex = -1;

    printf("Processing transfer...\n");

    printf("Enter Your PIN: ");
    scanf("%d", &senderPin);

    for(int i = 0; i < 3; i++){

        if(senderPin == user[i].pin){

            senderFound = 1;
            senderIndex = i;

            break;
        }
    }

    if(senderFound == 0){

        printf("Invalid PIN!\n");

        return 0;
    }

    printf("Enter Receiver Account Number: ");
    scanf("%d", &receiverAccNo);

    for(int i = 0; i < 3; i++){

        if(receiverAccNo == user[i].accNo){

            receiverFound = 1;
            receiverIndex = i;

            break;
        }else{
            receiverFound = 0 ? printf("Receiver Account Not Found!\n") : 0;
        }
    }


    printf("Enter Transfer Amount: ");
    scanf("%f", &amount);

    if(amount <= user[senderIndex].balance){

        user[senderIndex].balance -= amount;

        user[receiverIndex].balance += amount;

        printf("Transfer Successful!\n");

        printf("Sender Remaining Balance: %.2f\n",
        user[senderIndex].balance);

    }else{

        printf("Insufficient Balance!\n");
    }
    process_delay(5);

    return 0;
}

int printReceipt(){

    int pin;
    int found = 0;

    printf("Printing receipt...\n");

    printf("Enter PIN: ");
    scanf("%d", &pin);

    for(int i = 0; i < 3; i++){

        if(pin == user[i].pin){

            found = 1;

            printf("\n=================================\n");
            printf("\t ATM TRANSACTION RECEIPT\n");
            printf("=================================\n");

            printf("Account Number : %d\n", user[i].accNo);
            printf("Account Holder : %s\n", user[i].name);
            printf("Available Balance : %d\n", user[i].balance);

            time_t now;
            time(&now);

            printf("Transaction Time : %s", ctime(&now));

            printf("=================================\n");

            break;
        }
    }
    if(found == 0){

        printf("Invalid PIN!\n");
    }
    
    printf("do you want to continue? (1 for yes, 0 for no): ");
    int continueChoice;
    scanf("%d", &continueChoice);  
    
    if(continueChoice == 1){
        startUpMenu();
    }else{
        printf("Thank you for using our ATM service!\n");
    }
    process_delay(5);

    return 0;
}

int generatePin(){

    int accNo;
    int otp;
    int newPin;
    int confirmPin;

    int found = 0;

    printf("Generating green PIN...\n");

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < 3; i++){

        if(accNo == user[i].accNo){

            found = 1;

            printf("Account Holder : %s\n", user[i].name);

            printf("Enter OTP : ");
            scanf("%d", &otp);

            if(otp == 1234){

                printf("OTP Verified Successfully!\n");

                printf("Enter New PIN : ");
                scanf("%d", &newPin);

                printf("Confirm New PIN : ");
                scanf("%d", &confirmPin);

                if(newPin == confirmPin){

                    user[i].pin = newPin;

                    printf("PIN Changed Successfully!\n");

                }else{

                    printf("PIN Confirmation Failed!\n");
                }

            }else{

                printf("Invalid OTP!\n");
            }

            break;
        }
    }

    if(found == 0){

        printf("Account Not Found!\n");
    }

    process_delay(5);
    
    printf("do you want to continue? (1 for yes, 0 for no): ");
    int continueChoice;
    scanf("%d", &continueChoice);  
    
    if(continueChoice == 1){
        startUpMenu();
    }else{
        printf("Thank you for using our ATM service!\n");
    }
    return 0;
}

int quickCash(){

    int accNo;
    int pin;

    float amount;

    int found = 0;

    printf("Processing Quick Cash...\n");

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter PIN: ");
    scanf("%d", &pin);

    for(int i = 0; i < 3; i++){

        if(accNo == user[i].accNo && pin == user[i].pin){

            found = 1;

            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(user[i].balance >= amount){

                user[i].balance -= amount;

                printf("Withdraw Successful!\n");

                printf("Withdraw Amount : %d\n", amount);

                printf("Remaining Balance : %d\n",user[i].balance);

            }else{

                printf("Insufficient Balance!\n");
            }

            break;
        }
    }

    if(found == 0){

        printf("Invalid Account Number or PIN!\n");
    }

    process_delay(5);
    system("cls");
    return 0;
}