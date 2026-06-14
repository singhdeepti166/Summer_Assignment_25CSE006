//QUESTION NO 53
#include<stdio.h>
int main(){
    int arr[100],n,x,i;
    printf("Enter size:");
    scanf("%d",&n);
    
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("Enter element to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("Found");
            return 0;
        }
    }
           printf("Not Found");
       return 0;
}
