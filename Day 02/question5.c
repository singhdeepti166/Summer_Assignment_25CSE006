//QUESTION NO 5
#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);

    for(sum=0;n>0;n/=10){
        sum=sum+(n%10);
    }
    printf("sum=%d",sum);
    return 0;

}
