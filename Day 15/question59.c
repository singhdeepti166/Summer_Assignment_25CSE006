//QUESTION NO 59
#include<stdio.h>
int main(){
    int arr[100],n,i,last;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    last=arr[n-1];
    for(i=n-1;i>0;i--){
      arr[i]=arr[i-1];
        
    }
      arr[0]=last;
    
    printf("array after right rotation:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}
