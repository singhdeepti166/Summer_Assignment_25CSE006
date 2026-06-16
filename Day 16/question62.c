//QUESTION NO 62
#include<stdio.h>
int main(){
    int arr[100],n,i,j;
    int maxFreq=0,element;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter element:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count>maxFreq){
            maxFreq=count;
            element=arr[i];
        }
    }
    printf("Maximum frequency element:%d\n",element);
    printf("Frequency=%d\n",maxFreq);
    return 0;
}

