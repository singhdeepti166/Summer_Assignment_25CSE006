//QUESTION NO 45
#include<stdio.h>
int palindrome(int n){
    int rev=0,temp=n,rem;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return(rev==n);
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(palindrome(num))
    printf("Palindrome",num);
    else
    printf("Not palindome",num);
    return 0;
}

