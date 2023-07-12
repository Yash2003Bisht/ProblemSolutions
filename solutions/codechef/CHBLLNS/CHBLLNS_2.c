// DATE: 12/07/2023, 07:58:05
// PROBLEM NAME: Chef and Ballons
// PROBLEM URL: https://www.codechef.com/problems/CHBLLNS
// PROBLEM DIFFICULTY RATTING: 1399
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#define min(a, b)(a > b ? b : a)

int main(void) {
    int t, r, g, b, k, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &r, &g, &b);
        scanf("%d", &k);
        k--;

        count = min(r, k) + min(g, k) + min(b, k) + 1;
        printf("%d\n", count);
    }
    
	return 0;
}



