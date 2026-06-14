//QUESTION NO 17
// Perfect Number is a number whose sum of proper divisors is equal to the number.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("PERFECT NUMBER");
    else
    printf("NOT PERFECT NUMBER");
    return 0;
}
