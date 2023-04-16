// DATE: 16/04/2023, 10:36:56
// PROBLEM NAME: IPL Ticket Rush
// PROBLEM URL: https://www.codechef.com/problems/IPLTRSH
// PROBLEM DIFFICULTY RATTING: 273
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define max(a, b)(a>b ? a:b)

int main(void) {
    int t, n, m, ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        ans = max(0, n-m);
        printf("%d\n", ans);
    }
    
	return 0;
}



