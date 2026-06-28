//QUESTION NO 112
#include <stdio.h>
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    struct Contact c[5];
    int i;
    printf("Enter details of 5 contacts:\n");
    for(i = 0; i < 5; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);

        printf("Enter Email: ");
        scanf("%s", c[i].email);
    }
    printf("\n===== Contact Records =====\n");
    for(i = 0; i < 5; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name         : %s\n", c[i].name);
        printf("Phone Number : %s\n", c[i].phone);
        printf("Email        : %s\n", c[i].email);
    }

    return 0fil
  cont
