//QUESTION NO 106
#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct Employee e;

    printf("Enter Employee ID:\n ");
    scanf("%d",&e.id);

    printf("Enter Employee Name:\n ");
    scanf("%s",&e.name);

    printf("Enter Salary:\n ");
    scanf("%f",&e.salary);

    printf("\n----- Employee Record -----\n");
    printf("Employee ID   : %d\n",e.id);
    printf("Employee Name : %s\n",e.name);
    printf("Salary        : %.2f\n",e.salary);

    return 0;
}

