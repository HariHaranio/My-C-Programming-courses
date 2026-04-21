// given array a[] = {1,2,5,4,1,2,5} 
/* 
    1.find how many times 1 is present in the array.
    2.find how many times 2 is present in the array.
    3.find how many times 4 is present in the array.
    4.find how many times 5 is present in the array.
 */

#include<stdio.h>

int main(){
    int a [] = {1,2,5,4,1,2,5};
    int count_1 = 0,count_2 = 0,count_4 = 0,count_5 = 0;

    int size = sizeof(a)/sizeof(a[0]);

    for(int i = 0; i < size;i++){
        if(a[i] == 1){
            count_1++;
        }else if (a[i]==2){
            count_2++;
        }else if (a[i]==4){
            count_4++;
        }else{
            count_5++;
        }
    }

    printf("1 is present in the array \'%d\' times\n",count_1);
    printf("2 is present in the array \'%d\' times\n",count_2);
    printf("4 is present in the array \'%d\' times\n",count_4);
    printf("5 is present in the array \'%d\' times\n",count_5);
    return 0;
}