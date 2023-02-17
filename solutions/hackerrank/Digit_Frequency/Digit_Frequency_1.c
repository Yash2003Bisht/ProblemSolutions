// QUESTION URL: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
// STATUS: Accepted

#include <stdio.h>
#include <ctype.h>

int main(){
    int arr[10] = {0};
    char s[1001];
    scanf("%s", s);
    
    for (int i=0; s[i] != '\0'; i++)
        if (isdigit(s[i])) arr[s[i] - 48]++;
    
    for (int i=0; i<10; i++)
        printf("%d ", arr[i]);
    
    return 0;

}
