//QUESTION NO 76
#include<stdio.h>
int main(){
    int a[10][10];
    int rows,cols,i,j,sum=0;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d",&rows,&cols);

    printf("Enter element of matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        sum = sum + a[i][i];
    }
    printf("Sum of diagonal elements: %d\n",sum);
    return 0;
}

