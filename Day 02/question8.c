//QUESTION NO 8

#include<stdio.h>
int main(){
    int n,temp,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;

    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(temp==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
