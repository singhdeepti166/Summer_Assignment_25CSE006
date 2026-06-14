//QUESTION NO 18
// Strong Number is a number whose sum of the factorials of its digits is equal to the number itself.
#include<stdio.h>
int main(){
    int n,i,sum=0,temp,rem,fact;
    printf("Enter a number:");
    scanf("%d",&n);

    for(temp=n;temp>0;temp=temp/10){
        rem=temp%10;

        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
         }
         if(sum==n)
         printf("STRONG NUMBER");
         else
         printf("NOT STRONG NUMBER");
         return 0;

}
