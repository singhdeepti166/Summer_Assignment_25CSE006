//QUESTION NO 43
#include<stdio.h>
int prime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter marks:");
    scanf("%d",&n);
    if(prime(n))
    printf("Prime");
    else
    printf("not prime");
    return 0;
}

