//QUESTION NO 118
#include <stdio.h>
int main()
{
    int bookId, choice;
    char bookName[50];
    char author[50];

    do
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Add Book\n");
        printf("2. Display Book\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId);
                printf("Enter Book Name: ");
                scanf("%s", bookName);
                printf("Enter Author Name: ");
                scanf("%s", author);
                break;

            case 2:
                printf("\nBook ID : %d\n", bookId);
                printf("Book Name : %s\n", bookName);
                printf("Author : %s\n", author);
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

