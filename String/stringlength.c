#include<stdio.h>
#include<string.h>

int main(){
    char getStr[10];
    int count = 0;

    printf("Enter a str:");
    scanf("%9s",getStr);

    printf("The Str you Enter: %s\n",getStr);

    for (int i = 0; getStr[i] != '\0'; i++){
        count++;
    }
    printf("The length of the string is: %d\n",count);

    return 0;
}