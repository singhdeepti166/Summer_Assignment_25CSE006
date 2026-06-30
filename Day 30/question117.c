//QUESTION NO 117
#include<stdio.h>
#include<string.h>
int main()
{
    int i, n, choice, search, found = 0;
    int roll[100];
    char name[100][50];
    float marks[100];
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &roll[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    do
    {
        printf("\n===== STUDENT RECORD MENU =====\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d", roll[i]);
                    printf("\nName    : %s", name[i]);
                    printf("\nMarks   : %.2f\n", marks[i]);
                }
                break;

            case 2:
                printf("Enter Roll No to Search: ");
                scanf("%d", &search);

                found = 0;

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

