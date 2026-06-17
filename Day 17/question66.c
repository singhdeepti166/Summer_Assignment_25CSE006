//QUESTION NO 66
#include<stdio.h>
int main(){
    int arr1[100],arr2[100];
    int n1,n2,i,j,found;
  
    printf("Enter size of first array:");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
    
    printf("Enter size of second array:");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
    
    printf("Union of arrays:\n");
    //print unique elements of first array
    for(i=0;i<n1;i++){
        found=0;
        for(j=0;j<i;j++){
            if(arr1[i]==arr1[j]){
                found=1;
                break;
            }
        }
        if(found==0)
        printf("%d\n",arr1[i]);
    }
    
    //print elements of second array not present in first
    for(i=0;i<n2;i++){
        found=0;
        for(j=0;j<n1;j++){
            if(arr2[i]==arr1[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            printf("%d\n",arr2[i]);
        }

    }
    return 0;

