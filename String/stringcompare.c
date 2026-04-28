#include<stdio.h>
#include<string.h>

int main(){
    char getStr_1[10],getStr_2[10];
    int i = 0;

    printf("Enter a string 1:");
    scanf("%s",getStr_1);

    printf("Enter a string 2:");
    scanf("%s",getStr_2);

    printf("The Str 1 you Enter: %s\n",getStr_1);
    printf("The Str 2 you Enter: %s\n",getStr_2);


    int strLength = strlen(getStr_1);

    while (getStr_1[i] != '\0' && getStr_2[i] != '\0') {
        if (getStr_1[i] != getStr_2[i]) {
            printf("Strings are NOT equal\n");
            return 0;
        }
        i++;
    }
    
    if (getStr_1[i] == '\0' && getStr_2[i] == '\0') {
        printf("Strings are equal\n");
    } else {
        printf("Strings are NOT equal\n");
    }
    

    return 0;
}