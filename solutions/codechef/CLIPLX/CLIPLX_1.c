// DATE: 07/03/2023, 01:33:26
// PROBLEM NAME: IPL and RCB
// PROBLEM URL: https://www.codechef.com/problems/CLIPLX
// PROBLEM DIFFICULTY RATTING: 1167
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", max(0, x-y));
    }
    
	return 0;
}



