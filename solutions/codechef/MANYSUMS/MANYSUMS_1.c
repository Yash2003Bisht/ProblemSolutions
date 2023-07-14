// DATE: 14/07/2023, 08:23:08
// PROBLEM NAME: Distinct Pair Sums
// PROBLEM URL: https://www.codechef.com/problems/MANYSUMS
// PROBLEM DIFFICULTY RATTING: 1480
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, l, r;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &l, &r);
        printf("%d\n", r*2 - l*2 + 1);
    }
    
	return 0;
}



