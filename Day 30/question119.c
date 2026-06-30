//QUESTION NO 119
#include <stdio.h>
int main()
{
    int empId, choice;
    char empName[50];
    float salary;

    do
    {
        printf("\n===== EMPLOYEE MENU =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId);
                printf("Enter Employee Name: ");
                scanf("%s", empName);
                printf("Enter Salary: ");
                scanf("%f", &salary);
                break;

            case 2:
                printf("\nEmployee ID : %d\n", empId);
                printf("Employee Name : %s\n", empName);
                printf("Salary : %.2f\n", salary);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }
      while(choice != 3);

    return 0;
}
