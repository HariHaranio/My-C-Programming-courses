#include<stdio.h>
#include<string.h>

int main(){
    char getStr[10];

    printf("Enter a str:");
    scanf("%s",getStr);

    printf("The Str you Enter: %s\n",getStr);
    int strLength = strlen(getStr);

    printf("The reversed:");
    for (int i = strLength - 1; i >= 0; i--){
        printf("%c",getStr[i]);
    }

    return 0;
}