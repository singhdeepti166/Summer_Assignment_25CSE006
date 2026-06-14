//QUESTION NO 12
#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter two number:");
    scanf("%d%d",&a,&b);

    for(i=1;;i++){
        if(i%a==0 && i%b==0){
            printf("LCM=%d",i);
            break;
        }
    }
    return 0;
}
