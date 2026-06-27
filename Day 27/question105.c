//QUESTION NO 105
#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct Student s;
    printf("Enter Roll Number:\n ");
    scanf("%d",&s.roll);

    printf("Enter Name:\n ");
    scanf("%s",s.name);

    printf("Enter Marks:\n ");
    scanf("%f",&s.marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("Marks       : %.2f\n",s.marks);

    return 0Ent
   fil
