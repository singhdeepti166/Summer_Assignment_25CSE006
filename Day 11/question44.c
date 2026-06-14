//QUESTION NO 44
#include<stdio.h>
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
       fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("factorial=%d",factorial(n));
    return 0;
}

