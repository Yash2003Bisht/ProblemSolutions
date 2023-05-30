// DATE: 30/05/2023, 07:45:20
// PROBLEM NAME: Faded Palindromes
// PROBLEM URL: https://www.codechef.com/problems/LEXOPAL
// PROBLEM DIFFICULTY RATTING: 1335
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, flag;
    char s[12346];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        n = strlen(s);
        flag = 1;

        for (int i=0; s[i]!='\0'; i++){
            if (s[i] == '.')
                s[i] = s[n-i-1] != '.' ? s[n-i-1] : 'a';
        }

        for (int i=0; i<n/2; i++){
            if (s[i] != s[n-i-1]){
                flag = 0;
                break;
            }
        }
        
        if (flag)
            printf("%s\n", s);
        else
            printf("-1\n");
        
    }
    
	return 0;
}



