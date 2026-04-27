// prymid pattern
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int row,col;

    for (row = 1;row<=5;row++){
        for (col = 1;col <= row;col++){
            printf("* ");
        }
        printf("\n");
    }printf("\nRight Half Pyramid\n\n");

    for (row = 1;row<=5;row++){
        for (col = 1;col <= 1 -(row-5);col++){
            printf("* ");
        }
        printf("\n");
    }printf("\nInverted Right Half Pyramid\n\n");

    for (row = 1;row<=5;row++){
        for (col = 1;col <= 5 - row;col++){
            printf("");
        }
        for (col =1;col <=row;col++){
            printf(" *");
        }
        printf("\n");
    }printf("\nLeft Half Pyramid\n\n");

    for (row = 1;row<=5;row++){
        for (col = 1;col <= row -1;col++){
            printf("");
        }
        for (col =1;col <= 5 - row +1;col++){
            printf(" *");
        }
        printf("\n");
    }printf("\nInverted left Half Pyramid\n\n");

    for (row = 1;row<=5;row++){
        for (col = 1;col <= 5;col++){
            if (row == 1 || col == 1){
                printf("* ");
            }else if(row == 5 || col == 5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }printf("\nHollow Square Pattern\n\n");

    for (row = 1;row <= 5;row++){
        for (col = 1;col <= 5 - row;col++){
            printf(" ");
        }for (col = 1;col <= 2 *row -1;col++){
            printf("*");
        }
        printf("\n");
    }printf("\nFull Pyramid\n\n");

    for (row = 1;row <= 5;row++){
        for (col = 1;col <= row - 1;col++){
            printf(" ");
        }for (col = 1;col <= 2 *(5 - row) + 1;col++){
            printf("*");
        }
        printf("\n");
    }printf("\nInverted Full Pyramid\n\n");

    for (row = 1;row <= 5;row++){
        for (col = 1;col <= 5 - row;col++){
            printf(" ");
        }
        for (col = 1;col <= 2 * row - 1;col++){
            if (col == 1 || col == 2 * row - 1 || row == 5){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }printf("\nHallow Full Pyramid\n\n");

    for (row = 5;row >= 1;row--){
        for (col = 1;col <= 5 - row;col++){
            printf(" ");
        }
        for (col = 1;col <= 2 * row - 1;col++){
            if (col == 1 || col == 2 * row - 1 || row == 5){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }printf("\nHallow inverted Full Pyramid\n\n");

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
    }printf("\nHoursglass pattern\n\n");


    for (row = 1;row <= 5;row++){
        for (col = 1;col <= row - 1;col++){
            printf(" ");
        }
        for (col = 1;col <= 5;col++){
            printf("*");
        }
        printf("\n");
    }printf("\nRhombus pattern\n\n");


    for (row = 1;row <= 5;row++){
        for (col = 1;col <= 5-row;col++){
            printf(" ");
        }
        for (col = 1;col <= 2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }
    for (row = 5-1;row >= 1;row--){
        for (col = 1;col <= 5-row;col++){
            printf(" ");
        }
        for (col = 1;col <= 2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }printf("\nDiamond Pattern\n\n");


    return 0;
}
