// QUESTION URL: https://www.hackerrank.com/challenges/hello-world-c/problem
// STATUS: Accepted

#include <stdio.h>

int main(){
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}
