//QUESTION NO 107
#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float basic, hra, da, pf, netSalary;
};
int main(){
    struct Employee e;

    printf("Enter Employee ID:\n ");
    scanf("%d",&e.id);

    printf("Enter Employee Name: \n");
    scanf("%s",e.name);

    printf("Enter Basic Salary:\n ");
    scanf("%f",&e.basic);

    printf("Enter HRA:\n ");
    scanf("%f",&e.hra);

    printf("Enter DA:\n ");
    scanf("%f",&e.da);

    printf("Enter PF:\n ");
    scanf("%f",&e.pf);

    e.netSalary = e.basic + e.hra + e.da - e.pf;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID : %d\n",e.id);
    printf("Name        : %s\n",e.name);
    printf("Basic       : %.2f\n",e.basic);
    printf("HRA         : %.2f\n",e.hra);
    printf("DA          : %.2f\n",e.da);
    printf("PF          : %.2f\n",e.pf);
    printf("Net Salary  : %.2f\n",e.netSalary);

    return 0;
}


