//QUESTION NO 6
#include<stdio.h>
int main(){
    int n,rev;
    printf("Enter a number:");
    scanf("%d",&n);

    for(rev=0;n>0;n/=10){
        rev=rev*10+(n%10);
    }
    printf("Reverse=%d",rev);
    return 0;

}
