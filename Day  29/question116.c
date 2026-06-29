//QUESTION NO 116
#include <stdio.h>
int main() {
    int id, quantity;
    char name[50];
    float price, totalValue;

    printf("===== Inventory Management System =====\n");
    printf("Enter Product ID: ");
    scanf("%d", &id);
    printf("Enter Product Name: ");
    scanf("%s", name);
    printf("Enter Product Price: ");
    scanf("%f", &price);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    totalValue = price * quantity;
    printf("\n===== Product Details =====\n");
    printf("Product ID      : %d\n", id);
    printf("Product Name    : %s\n", name);
    printf("Product Price   : %.2f\n", price);
    printf("Quantity        : %d\n", quantity);
    printf("Total Value     : %.2f\n", totalValue);
    return 0;
}
