// QUESTION URL: https://www.hackerrank.com/challenges/printing-tokens-/problem
// STATUS: Accepted

#include <stdio.h>

int main(){
    char s[1001] = {'\0'};
    int j;
    
    scanf("%[^\n]", s);
    
    for (int i=0; s[i] != '\0'; i++){
        j = i;
        while(s[j] != ' ' && s[j] != '\0'){
            printf("%c", s[j]);
            j++;
        }
        printf("\n");
        i = j;
    }
    return 0;
}
