//QUESTION NO 14
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("Nth Fibonacci number = %d", a);
    return 0;
}
