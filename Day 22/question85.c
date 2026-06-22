//QUESTION NO 85
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,leng;
    printf("Enter a string:");
    scanf("%s",str);
    
    leng = strlen(str);
    for(i=0;i<leng/2;i++){
        if(str[i]!=str[leng-1-i]){
            printf("Not palindrome string");
            return 0;
        }
    }
    printf("Palindrome string");
    return 0;
}
