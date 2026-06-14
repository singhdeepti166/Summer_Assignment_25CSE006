//QUESTION NO 46
#include<stdio.h>
int armstrong(int n){
    int temp=n,sum=0,rem;
    while(temp!=0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    return sum==n;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(armstrong(num))
    printf("Armstrong");
    else
    printf("Not armstrong");
    return 0;
}

