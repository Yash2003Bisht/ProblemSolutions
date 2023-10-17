// DATE: 17/10/2023, 08:39:48
// PROBLEM NAME: Buy Ten Packets
// PROBLEM URL: https://www.codechef.com/problems/TENPACKETS
// PROBLEM DIFFICULTY RATTING: 669
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", min(x*5, y*2 + x));
    }
    
	return 0;
}



