//QUESTION NO 96
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j,k;
    
    printf("Enter a string:");
    scanf("%s",str);
    
    for(i=0;str[i]!='\0';i++){
        for(j=1+i;str[j]!='\0';j++){
            if(str[i]==str[j]){
                for(k=j;str[k]!='\0';k++){
                    str[k]=str[k+1];
                }
                j--;
            }
        }
    }
    printf("After removing duplicate:%s",str);
    return 0;
}


