#include<stdio.h>
#include<string.h>

int main(){

    char str[20] = "hari";
    char insertChar;
    int insertPostion;

    int StrLength = strlen(str);

    printf("printing a string : ");
    printf("%s",str);

    printf("\nAccessing each Characters in a string\n");
    for (int i = 0; i < StrLength; i++){
        printf("%c\n",str[i]);
    }

    return 0;

}