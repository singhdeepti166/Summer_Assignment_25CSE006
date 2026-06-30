//QUESTION NO 120
#include <stdio.h>
#include <string.h>
int roll[50], n = 0;
char name[50][30];
float marks[50];
void addStudent();
void displayStudent();
void searchStudent();

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }
      while(choice != 4);

    return 0;
}

void addStudent()
{
    printf("\nEnter Roll No: ");
    scanf("%d", &roll[n]);
    printf("Enter Name: ");
    scanf("%s", name[n]);
    printf("Enter Marks: ");
    scanf("%f", &marks[n]);
    n++;

    printf("Student Added Successfully!\n");
}
void displayStudent()
{
    int i;
    if(n == 0)
    {
        printf("No Records Found.\n");
        return;
    }
    printf("\nStudent Records:\n");
    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %.2f\n", marks[i]);
    }
}

void searchStudent()
{
    int i, search, found = 0;
    printf("Enter Roll No to Search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(roll[i] == search)
        {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);

            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}
