//QUESTION NO 27
#include <stdio.h>
int sum(int n){
    if(n<10)
        return n;
  return(n%10)+sum(n/10);
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    printf("sum of digits=%d",sum(n));
    return 0;
}
