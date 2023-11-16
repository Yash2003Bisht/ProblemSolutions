// DATE: 14/11/2023, 08:14:20
// PROBLEM NAME: Too many items
// PROBLEM URL: https://www.codechef.com/problems/POLYBAGS
// PROBLEM DIFFICULTY RATTING: 738
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int ans = ceil((float)n/10);
        printf("%d\n", ans);
    }
    
	return 0;
}



