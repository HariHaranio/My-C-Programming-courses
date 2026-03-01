#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to display the day of the week using a number (1–7).
int main()
{
    int getdayNumber;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &getdayNumber);
    
    switch(getdayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}