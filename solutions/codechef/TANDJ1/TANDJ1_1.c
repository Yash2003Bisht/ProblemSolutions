// DATE: 10/07/2023, 07:42:22
// PROBLEM NAME: Tom And Jerry 1
// PROBLEM URL: https://www.codechef.com/problems/TANDJ1
// PROBLEM DIFFICULTY RATTING: 1379
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, a, b, c, d, k, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &k);
        diff = abs(a - c) + abs(b - d);

        if (k >= diff && (k-diff)%2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
            
        
    }
    
	return 0;
}



