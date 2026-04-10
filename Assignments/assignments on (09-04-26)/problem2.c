/*switch based program.
arithmetic operations using switch case
*/
#include<stdio.h>
#include<math.h>
int main(){
    int intgetnum1,intgetnum2,result;
    float getnum1,getnum2,floatresult;
    int getOperation;

    printf("\t\t\tarithmetic operations using switch case\n");
    printf("\t1.Addition\t\t2.subtraction\n");
    printf("\t3.Multiplication\t\t4.Division\n");
    printf("\nPlease! Choose the above arithmetic operations to perform.");
    scanf("%d",&getOperation);

    switch (getOperation){
    case 1:
        printf("Addtion operation\n");
        printf("Enter the values of two numbers:");
        scanf("%d %d",&intgetnum1,&intgetnum2);

        result = intgetnum1 + intgetnum2;
        printf("The addtion of two numbers %d + %d = %d",intgetnum1,intgetnum2,result);
        break;
    case 2:
        printf("Subtraction operation\n");
        printf("Enter the values of two numbers:");
        scanf("%d %d",&intgetnum1,&intgetnum2);

        result = intgetnum1 - intgetnum2;
        printf("The subtraction of two numbers %d - %d = %d",intgetnum1,intgetnum2,result);
        break;
    case 3:
        printf("Multiplication operation\n");
        printf("Enter the values of two numbers:");
        scanf("%f %f",&getnum1,&getnum2);

        floatresult = getnum1 * getnum2;
        printf("The multiplication of two numbers %.2f * %.2f = %.2f",getnum1,getnum2,floatresult);
        break;
    case 4:
        printf("Division operation\n");
        printf("Enter the values of two numbers:");
        scanf("%f %f",&getnum1,&getnum2);

        floatresult = getnum1 / getnum2;
        printf("The division of two numbers %.2f / %.2f = %.2f",getnum1,getnum2,floatresult);
        break;
    
    default:
        printf("Please! choose the arithmetic operations(1 - 4)\n");
        break;
    }
    return 0;
}