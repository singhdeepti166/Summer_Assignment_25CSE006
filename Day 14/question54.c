//QUESTION NO 54
#include<stdio.h>
int main(){
    int arr[100],n,i,num,count=0;
    printf("Enter size:");
    scanf("%d",&n);
    
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("Enter number:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num)
           count++;
        }
           printf("frequency=%d",count);
       return 0;
}
