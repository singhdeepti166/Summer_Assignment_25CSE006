//QUESTION NO 110
#include <stdio.h>
struct Bank {
    int accountNo;
    char name[50];
    char accountType[20];
    float balance;
};
int main() {
    struct Bank customer[5];
    int i;
    printf("Enter details of 5 customers:\n");
    for(i = 0; i < 5; i++) {
        printf("\nCustomer %d\n", i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &customer[i].accountNo);

        printf("Enter Customer Name: ");
        scanf(" %[^\n]", customer[i].name);

        printf("Enter Account Type (Saving/Current): ");
        scanf("%s", customer[i].accountType);

        printf("Enter Balance: ");
        scanf("%f", &customer[i].balance);
    }

    printf("\n===== Bank Account Records =====\n");
    for(i = 0; i < 5; i++) {
        printf("\nCustomer %d\n", i + 1);
        printf("Account Number : %d\n", customer[i].accountNo);
        printf("Customer Name  : %s\n", customer[i].name);
        printf("Account Type   : %s\n", customer[i].accountType);
        printf("Balance        : %.2f\n", customer[i].balance);
    }
    return 0;
}

