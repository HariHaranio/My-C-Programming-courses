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