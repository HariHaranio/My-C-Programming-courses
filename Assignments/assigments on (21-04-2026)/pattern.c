/*
    print 3x3
    print 4x4
    print w 
    print m
    print 1 2 3 in 3x3
    using loops
*/

#include<stdio.h>

int main(){

    printf("\t\t\t3x3 pattern\n");
    for(int i = 0;i <= 2;i++){
        for(int j = 0;j <= 2;j++){
            printf("* ");
        }printf("\n");
    }

    printf("--------------------------------------------------\n\n");
    printf("\t\t\t4x4 pattern\n");
    for(int i = 0;i <= 3;i++){
        for(int j = 0;j <= 3;j++){
            printf("* ");
        }printf("\n");
    }

    printf("--------------------------------------------------\n\n");
    printf("\t\t\t1,2,3 in 3x3 pattern\n");
    for(int i = 1;i <= 3;i++){
        for(int j = 1;j <= 3;j++){
            printf("%d ",j);
        }printf("\n");
    }

    printf("--------------------------------------------------\n\n");
    printf("\t\t\tW pattern\n");
    for(int row = 1;row <= 4;row++){
        for(int col = 1;col <= 5;col++){
            if (col == 1 || col == 5){
                printf(" * ");
            }else if ( row == 3 && (col == 2 || col == 4)){
                printf("*");
            }else if (col == 3 && row == 2){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }

    printf("--------------------------------------------------\n\n");
    printf("\t\t\tM pattern\n");
    for(int row = 1;row <= 4;row++){
        for(int col = 1;col <= 5;col++){
            if (col == 1 || col == 5){
                printf(" * ");
            }else if ( row == 2 && (col == 2 || col == 4)){
                printf("*");
            }else if (col == 3 && row == 3){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
    
    printf("--------------------------------------------------\n\n");
    printf("\t\t\tRight Half Pyramid\n\n");
    for (int row = 1;row<=5;row++){
        for (int col = 1;col <= row;col++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}