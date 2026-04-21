// given array a[] = {1,2,5,4,1,2,5} 
/* 
    find the duplicate and remove the element and re-print the array
 */

 #include<stdio.h>

 int main(){
    int a[] = {1,2,5,4,1,2,5};
    int size = sizeof(a)/sizeof(a[0]);
    int isDuplicate = 0,j = 0;
    int temp[4];

    printf("Given array a = [");
    for (int i = 0; i < size; i++){
       printf("%d,",a[i]);
    }printf("]\n");
    
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < j; k++) {
            if (temp[k] == a[i]) {
                isDuplicate = 1;
            }
        }
        if (!isDuplicate) {
            temp[j] = a[i];
            j++;
        }
    }
    printf("the array of removed duplicate number a = [");
    for (int i = 0; i < j; i++) {
        printf("%d,", temp[i]);
    }printf("]\n");

    return 0;
 }