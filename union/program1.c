#include <stdio.h>

typedef union  {
    int rollNo;
    float height;
    char firstLetter;
}Student;

int main() {

    Student data;

    data.rollNo = 21;
    printf("%d\n", data.rollNo);
    data.height = 5.2;
    printf("%.2f\n", data.height);
    data.firstLetter = 'N';
    printf("%c", data.firstLetter);

    return 0;
}