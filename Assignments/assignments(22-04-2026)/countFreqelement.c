/*
* assignments - 22-04-2026
* Problem Statement: Write a program to count the frequency of each element in an array.
*/

#include <stdio.h>

int main() {
    int a[10] = {0};
    int size = sizeof(a) /sizeof(a[0]);
    int visited[10] = {0}; // track counted elements

    printf("Ente the %d elements\n",size);

    for (int i = 0; i < size; i++){
        printf("Enter element at [%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nThe elements you Enter into the array: [");

    for (int i = 0; i < size; i++){
        printf("%d,",a[i]);
    }printf("]");
    
    printf("\n");
    
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1){
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}