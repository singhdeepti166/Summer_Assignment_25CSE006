//QUESTION NO 48
#include<stdio.h>
int perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
     if(perfect(num)==num)
     printf("perfect number");
     else
     printf("not perfect number");
    return 0;
}

