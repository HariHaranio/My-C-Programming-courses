#include<stdio.h>
#include<string.h>

int main(){
    char srt1[10],strCopy[10];

    printf("Enter a string:");
    scanf("%9s",srt1);

    int stringLength = strlen(srt1);
    for (int i = 0; i < stringLength; i++){
        strCopy[i] = srt1[i];
    }
    strCopy[stringLength] = '\0';

    printf("Original string: %s\n", srt1);
    printf("Copied string: %s\n", strCopy);

    return 0;
}