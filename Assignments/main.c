#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col;

    for (row = 1;row <= 7;row++){
        for (col = 1;col <= 7;col++){
            if (row == 1 || row == 7){
                printf("*");
            }else if ((row == 2 && col >= 2 && col <=6)  || (row ==6 && col >= 2 && col <=6)){
                printf("*");
            }else if((row == 3 && col >= 3 && col <=5)  || (row ==5 && col >= 3 && col <=5)){
                printf("*");
            }else if (row == 4 && col == 4){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
