//QUESTION NO 78
#include<stdio.h>
int main(){
    int a[10][10];
    int n,i,j;
    printf("Enter order of matrix:");
    scanf("%d",&n);
    printf("Enter element:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                printf("Not a symmetric matrix:");
                return 0;
            }
        }
    }
    printf("Symmetric matrix");
    return 0;
}



