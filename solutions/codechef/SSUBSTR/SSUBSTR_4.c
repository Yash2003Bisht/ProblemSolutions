// DATE: 29/10/2022, 06:12:38
// PROBLEM NAME: Sorted Substrings
// PROBLEM URL: https://www.codechef.com/problems/SSUBSTR
// PROBLEM DIFFICULTY RATTING: 1310
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n];
        total = 0;
        scanf("%s", s);
        
        for (int i=0; i<n-1; i++){
            if (s[i] == '1' && s[i+1] == '0')
                total++;
        }
        
        printf("%d\n", total);
    }
	return 0;
}



