#include<stdio.h>

int main(){

    int numArray[100],sizeArray;
    int insertElement,insertPostion;
    int i;
    printf("\nEnter the size of an array:");
    scanf("%d",&sizeArray);



    if (sizeArray <= 0 || sizeArray >= 100){
        printf("\n please!Enter the array size with in the range 1 ~ 100\n");
        return 1;
    }
    printf("\nEnter the elements into the array:\n");

    for(i = 0;i < sizeArray;i++){
        printf("numArray[%d] = ",i);
        scanf("%i",&numArray[i]);
    }
    printf("\n");


    printf("\nThe Elements you Entered:\n");

    for (i = 0; i < sizeArray;i++){
        printf("%d ",numArray[i]);
    }
    printf("\n");

    printf("\nEnter the Elements to insert:");
    scanf("%d",&insertElement);

    printf("\nEnter the postion to insert:");
    scanf("%d",&insertPostion);

    if (insertPostion >= 100){
        printf("\nThe position is out of range:");
        return 2;
    }

    for (i = sizeArray;i > insertPostion;i--){
        numArray[i] = numArray[i - 1];
    }

    numArray[insertPostion] = insertElement;
    sizeArray++;

    printf("\nThe Array After insertion of [ %d ]:\n",insertElement);
    for (i = 0;i < sizeArray;i++){
        printf("%d ",numArray[i]);
    }
    return 0;
}