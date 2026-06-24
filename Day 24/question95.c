//QUESTION NO 95
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,start=0;
    int maxStart=0,maxLen=0;
    int currLen=0;
    
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\n'){
            currLen++;
        }
        else{
            if(currLen > maxLen){
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i+1;
        }
    }
    if(currLen > maxLen){
        maxLen = currLen;
        maxStart = start;
    }
    printf("Largest word: ");
    for(i=maxStart;i<maxStart+maxLen;i++){
        printf("%c",str[i]);
    }
    return 0;
}

