// QUESTION URL: https://www.hackerrank.com/challenges/printing-tokens-/problem
// STATUS: Accepted

#include <stdio.h>

int main(){
    char s[1001];
    int j;
    
    scanf("%[^\n]", s);
    
    for (int i=0; s[i] != '\0'; i++){
        if (s[i] == ' ') printf("\n");
        else printf("%c", s[i]);
    }
    return 0;
}
