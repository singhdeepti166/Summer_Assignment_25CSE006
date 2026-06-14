//QUESTION NO 52
#include<stdio.h>
int main(){
    int arr[100],n,i;
    int even=0,odd=0;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Even number=%d\n",even);
    printf("Odd number=%d",odd);
    return 0;
}

