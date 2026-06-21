//QUESTION NO 81
#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter string:");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++);
    printf("Length = %d",i);
    return 0;
}

