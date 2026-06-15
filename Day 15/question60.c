//QUESTION 60
#include<stdio.h>
int main() {
    int arr[100], n, i, j = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    while(j < n) {
        arr[j] = 0;
        j++;
    }
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
