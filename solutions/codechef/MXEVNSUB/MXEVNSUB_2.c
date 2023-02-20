// DATE: 10/01/2023, 07:51:09
// PROBLEM NAME: Maximum Length Even Subarray
// PROBLEM URL: https://www.codechef.com/problems/MXEVNSUB
// PROBLEM DIFFICULTY RATTING: 1221
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = n * (n + 1) / 2;
        
        if (total%2 == 0) printf("%d\n", n);
        else printf("%d\n", n-1);
        
    }

	return 0;
}



