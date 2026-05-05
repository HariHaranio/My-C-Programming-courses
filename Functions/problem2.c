/*
    Write a function to check whether a given number is Palindrome or not.
*/

#include <stdio.h>

int isPalindrome(int a);


int main(){
    int a = 0;

    printf("Enter a number to check it is Palindrome or not: ");
    scanf("%d",&a);
    
    int finalResult = isPalindrome(a) ? printf("The given number is Palindrome: %d",a) 
                                      : printf("The given number is not a Palindrome: %d",a); 
                                      // Ternary operator to print the result
    return 0;
}

int isPalindrome(int a){
    if (a < 0) return 0; // Negative numbers are not Palindrome
    int rev = 0;
    int tempNum = a;
    while (tempNum > 0){
        rev  = rev * 10 + (tempNum%10);
        tempNum /= 10;
    }
    return (a == rev);
}