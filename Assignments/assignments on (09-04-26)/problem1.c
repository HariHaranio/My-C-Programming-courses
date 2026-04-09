// switched based assignment
// ATM program using switch case
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int getOptions,passWord;
    int getScrectKey;
    int getAmount;
    int secrectKey = 9787;
    int accountBalance = 5000;
    char getUserName[10] ,changePassWord[10];
    long int conformPincode = 7331,pincode;
    long int minimumAmount = 300;

    printf("\n\t\t\t\t----C BANKING----\n");

    printf("\n\t\t\'1.Account\'\t\t\t\'2.Mini Statement\'");
    printf("\n\t\t\'3.Balance\'\t\t\t\'4.Pin Change\'");
    printf("\n\t\t\'5.Withdrawal\'\t\t\t\'6.Deposite\'");

    printf("\n\nPlease! Selecte the above option:");
    scanf("%d",&getOptions);

    switch (getOptions){
    case 1:
        printf("\n\n\t\t------Account-----");
        printf("\n\nEnter your Name:");
        scanf("%s",getUserName);

        if (strcmp(getUserName,"hari") == 0){

            printf("\n---- ACCOUNT DETAILS ----\n");
            printf("Account Holder : %s\n", getUserName);
            printf("Account Number : 123456789\n");
            printf("Account Type   : Savings\n");
            printf("Balance        : Rs.%d\n", accountBalance);
            printf("----------------------------\n");
        }else{
            printf("\nUser Account is Not Found!");
            printf("\nPlease! Check your User Name.\n\n");
        }
    break;
    case 2:
        printf("\n\n\t\t------Mini Statement-----");
        printf("\nLast 5 Transactions:\n");
        printf("\n1. Withdrawal   - Rs.500");
        printf("\n2. Deposit      - Rs.1000");
        printf("\n3. Withdrawal   - Rs.200");
        printf("\n4. Deposit      - Rs.2000");
        printf("\n5. Deposit      - Rs.200");
        printf("\n--------------------------------\n");

    break;
    case 3:
        printf("\n\n\t\t------Balance-----");

        printf("\nPlease! Enter your password:");
        scanf("%i",&passWord);

        if (passWord == 7331){
            printf("\n\t\t-------- * --------\n");
            printf("\n\nyour account balance is: Rs.%i\n\n",accountBalance);
            printf("\n\t\t-------- * --------\n");

        }else {
            printf("\n\nYour password is invalid!");
            printf("\nPlease! try again\n\n");
        }
    break;
    case 4:
        printf("\n\n\t\t------Pin Change-----");
        printf("\nDo You want change your password - \'yes\' or \'no\':");
        scanf("%s",changePassWord);

        if (strcmp(changePassWord,"yes") == 0){
            printf("\nPlease! Enter Your Secret key of your account:");
            scanf("%i",&getScrectKey);

            if (getScrectKey == secrectKey){
                int newPassword,comformPassword;
                printf("\nThe screct key has been matched.\n");

                printf("\nPlease! Enter your New Password:");
                scanf(" %i",&newPassword);
                printf("\nPlease! Conform your New Password:");
                scanf(" %i",&comformPassword);

                if (newPassword == comformPassword){
                    printf("\n\t\t-------- * --------\n");
                    printf("\nyour password has been updated sussufully.");
                    printf("\n\t\t-------- * --------\n");
                }else{
                    printf("\n\t\t-------- * --------\n");
                    printf("\npassword does not match.\nPlease! try again.\n\n");
                    printf("\n\n\t\t-------- * --------\n");
                }
            }else{
                printf("\n\t\t-------- * --------\n");
                printf("\nThe screct key does not matched.");
                printf("\nPlease! Try again\n\n");
                printf("\n\t\t-------- * --------\n");
            }
        }else{
            printf("\n\t\t-------- * --------\n");
            printf("\nYou have selected \'no\' for changing password.");
            printf("\nPlease! Try again\n\n");
            printf("\n\t\t-------- * --------\n");
        }
    break;
    case 5:
                printf("\n-------- WITHDRAWAL --------\n");

        printf("\nEnter the amount to withdrawal:");
        scanf(" %d",&getAmount);

        if(getAmount >= minimumAmount && getAmount <=accountBalance){
                printf("\nYour withdrawing the Amount of \'%d\':",getAmount);
                printf("\nPlease Enter your pincode:");
                scanf("%ld",&pincode);

                if(pincode == conformPincode){
                    char afterVerfication;
                    printf("\nPlease! collect your case");
                    printf("\nAre you interseted to check the balance amount \'y\' or \'n\':");
                    scanf(" %c",&afterVerfication);

                    if (afterVerfication == 'y'){
                        int balanceAmount = accountBalance - getAmount;
                        printf("\nThe Remining Amount is: %d",balanceAmount);
                        printf("\n\t\t----Thank you for Banking----");
                    }else{
                        printf("\n\t\t----Thank you for Banking----");
                    }
                }else{
                    printf("\nIncorrect Pincode.");
                    printf("\n\t\t----Transaction failed----");
                 }
        }else{
            printf("Please! Enter the correct amount.");
        }
    break;
    case 6:
        printf("\n-------- DEPOSITE --------\n");

        printf("\nPlease! Enter Your Account User Name:");
        scanf(" %s",getUserName);

        if (strcmp(getUserName,"hari") == 0){
            printf("\nPlease! Enter your Password:");
            scanf("%li",&pincode);

            if (pincode == conformPincode){
                printf("\nPassword is Verified.");

                int getDepoAmount,getCheckDepoAmount;
                printf("\nPlease! Enter the total amount to Deposite:");
                scanf("%i",&getDepoAmount);

                printf("\nPlease! Conform The amount you have Deposited:");
                scanf("%i",&getCheckDepoAmount);
                if (getDepoAmount == getCheckDepoAmount){
                    char getYes,get_yes;
                    printf("\nPlace Your case into the ATM");
                    printf("\nAfter Placed your Case \nEnter (y/n):");
                    scanf(" %c",&getYes);

                    if (getYes == 'y'){
                        printf("\nYour Case is deposited!...");
                        printf("\nAre you intersted in Checking your Account balance\nEnter (y/n):");
                        scanf(" %c",&get_yes);

                        if (get_yes == 'y'){
                            accountBalance += getDepoAmount;
                            printf("\nYour Total Account Balance is: %d",accountBalance);
                            printf("\n\t\t----Thank you for Banking----");

                        }else{
                            printf("\n\t\t----Thank you for Banking----");
                    }
                }else{
                    printf("\nYour Amount is not Collected\nPlease! collecte your case.");
                }
            }else{
                printf("\nPlease! conform the Case your Depositing.\nAnd Try Again.");
            }
        }else{
            printf("\nPassword is Wrong.\nEnter your correcte password.\nAnd Try Again.");
        }
    }else{
        printf("\nUser Name not identified.");
    }
        break;
    default:
        printf("\nInvalid Option!");
        break;
    }
    return 0;
}
