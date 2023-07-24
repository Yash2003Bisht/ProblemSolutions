// DATE: 24/07/2023, 08:42:06
// PROBLEM NAME: Max Binary
// PROBLEM URL: https://www.codechef.com/problems/MAX_BIN
// PROBLEM DIFFICULTY RATTING: 1143
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, k, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        char s[n+k+1];

        for (int i=0; i<n+k+1; i++)
            s[i] = '\0';

        scanf("%s", s);
        
        if (s[0] == '0'){
            s[0] = '1';
            k--;
        }
        
        for (int i=0; i<k; i++)
            s[n+i] = '0';
        
        printf("%s\n", s);
        
    }
    
	return 0;
}



