//QUESTION NO 86
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,word=0;
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(i==0 && str[i]!= ' ' && str[i]!='\n' ||
        (str[i]!= ' ' && str[i]!='\n' && str[i-1]==' ')){
            word++;
        }
    }
    printf("Total word=%d",word);
    return 0;
   
    return 0;
}
