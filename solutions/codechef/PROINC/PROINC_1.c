// DATE: 05/02/2023, 06:01:10
// PROBLEM NAME: Profit Increment
// PROBLEM URL: https://www.codechef.com/problems/PROINC
// PROBLEM DIFFICULTY RATTING: 414
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        z = x*0.1 + y;
        printf("%d\n", z);
    }
    
	return 0;
}



