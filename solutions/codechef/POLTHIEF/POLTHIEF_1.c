// DATE: 04/10/2023, 08:03:34
// PROBLEM NAME: Police and Thief
// PROBLEM URL: https://www.codechef.com/problems/POLTHIEF
// PROBLEM DIFFICULTY RATTING: 639
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, y, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        diff = abs(x - y);
        printf("%d\n", diff);
    }
    
	return 0;
}


