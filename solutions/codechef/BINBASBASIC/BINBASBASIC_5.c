// DATE: 04/09/2023, 09:34:49
// PROBLEM NAME: Binary Base Basics
// PROBLEM URL: https://www.codechef.com/problems/BINBASBASIC
// PROBLEM DIFFICULTY RATTING: 1447
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, k, n, mismatch, operations;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        char s[n+1];
        scanf("%s", s);
        mismatch = 0;

        for (int i=0; i<n-1; i++){
            if (s[i] != s[n-i-1])
                mismatch++;
        }

        operations = k-mismatch;

        if (operations >= 0 && (operations%2 == 0 || n%2 == 0))
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



