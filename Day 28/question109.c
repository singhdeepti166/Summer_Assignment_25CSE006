//QUESTION NO 109
#include <stdio.h>
struct Library {
    int bookId;
    char bookName[50];
    char authorName[50];
    float price;
};
int main() {
    struct Library book[5];
    int i;
    printf("Enter details of 5 books:\n");
    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", book[i].bookName);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", book[i].authorName);

        printf("Enter Price: ");
        scanf("%f", &book[i].price);
    }

    printf("\n===== Library Records =====\n");
    for(i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID      : %d\n", book[i].bookId);
        printf("Book Name    : %s\n", book[i].bookName);
        printf("Author Name  : %s\n", book[i].authorName);
        printf("Price        : %.2f\n", book[i].price);
    }
    return 0;
}
