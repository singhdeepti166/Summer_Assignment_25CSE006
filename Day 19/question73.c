//QUESTION NO 73
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],sum[10][10];
    int rows,cols,i,j;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    //FIRST MATRIX
    printf("Enter element of first matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //SECOND MATRIX
    printf("Enter element of second matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d", &b[i][j]);
        }
    }
    //ADDITION OF MATRIX
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of the matrices:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d" , sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
