#include<stdio.h>
#include<string.h>

#define strSize 20

int main(){

    char str[strSize] = "hari";
    char insertChar;
    int insertPostion;

    int StrLength = strlen(str);

    printf("printing a string : ");
    printf("%s",str);

    printf("\nEnter the Characters to insert:");
    scanf("%c",&insertChar);

    printf("\nEnter the postion to insert:");
    scanf("%d",&insertPostion);

    
    for (int i = StrLength;i > insertPostion;i--){
        str[i + 1] = str[i];
    }

    str[insertPostion] = insertChar;

    printf("After insertion: %s\n", str);

    return 0;

}