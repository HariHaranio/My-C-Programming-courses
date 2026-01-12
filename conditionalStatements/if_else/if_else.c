#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getchar;
    printf("Enter a letter to check it\'s is vowels : ");
    scanf("c",&getchar);

    if (getchar == 'A' || getchar == 'E' || getchar == 'I' || getchar == 'O' || getchar == 'U'){
        printf("\n It\'s a vowels  letter");
    }else{
        printf("\n It\'s not a vowels  letter");
    }

    return 0;
}
