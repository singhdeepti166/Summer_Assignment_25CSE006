//QUESTION NO 84
#include<stdio.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
         if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] - 32;
        }
    }
    printf("Uppercase string:%s",str);
    return 0;
}

