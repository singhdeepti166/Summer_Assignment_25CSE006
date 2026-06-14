//QUESTION NO 11
#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);


    for(i=a;i>=1;i--){
        if(a%i==0){
            for(j=i;j>=1;j--){
                if(b%j==0 && i==j){
                    printf("GCD=%d",i);
                }
            }
        }
    }
    return 0; 
}
