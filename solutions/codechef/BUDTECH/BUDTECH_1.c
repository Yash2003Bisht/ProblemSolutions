// DATE: 31/03/2023, 09:26:03
// PROBLEM NAME: Budget of Technex
// PROBLEM URL: https://www.codechef.com/problems/BUDTECH
// PROBLEM DIFFICULTY RATTING: 449
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, r;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &r);
        r = (r*1000)/2;
        printf("%d\n", r/5);
    }
    
	return 0;
}



