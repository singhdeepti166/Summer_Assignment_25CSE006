//QUESTION NO 61
#include<stdio.h>
int main(){
    int arr[100],n,i,sum=0,total;
    printf("enter n:");
    scanf("%d",&n);
    printf("Enter %d numbers:\n", n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    total=n*(n+1)/2;
    printf("missing number:%d",total-sum);
    return 0;
}
