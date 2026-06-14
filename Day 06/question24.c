//QUESTION NO 24
#include<stdio.h>
int main(){
   int n,x,i,result=1;
   printf("Enter Base:");
   scanf("%d",&x);
   printf("Enter Power:");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
       result=result*x;
   }
   printf("%d",result);
   return 0;
}
