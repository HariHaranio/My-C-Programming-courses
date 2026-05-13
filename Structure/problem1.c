#include<stdio.h>
#include<string.h>

struct student{
    char std_Name[10];
    int std_age;
    int std_grade[5];
};

int main(){
    struct student s1;

    printf("Enter the name of the student:");
    scanf("%9s",s1.std_Name);
    printf("Enter the age of the student:");
    scanf("%d",&s1.std_age);
    printf("Enter the grade of the student:");
    for (int i = 0; i < 5; i++){
        scanf("%d",&s1.std_grade[i]);
    }
    printf("\n");

    printf("The name of the student:%s\n",s1.std_Name);
    printf("The age of the student:%d\n",s1.std_age);
    printf("The grade of the student:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",s1.std_grade[i]);
    }
    
    return 0;
}