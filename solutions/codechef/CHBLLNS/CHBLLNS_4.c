// DATE: 12/07/2023, 07:51:15
// PROBLEM NAME: Chef and Ballons
// PROBLEM URL: https://www.codechef.com/problems/CHBLLNS
// PROBLEM DIFFICULTY RATTING: 1399
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a > b ? b : a)

int main(void) {
    int t;
    long long int r, g, b, k, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld", &r, &g, &b);
        scanf("%lld", &k);
        k--;
        count = min(r, k) + min(g, k) + min(b, k) + 1;
        printf("%lld\n", count);
    }
    
	return 0;
}



