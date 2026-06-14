//QUESTION NO 13
#include<stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("Fibonaaci series");

    for(i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
