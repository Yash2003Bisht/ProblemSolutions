// DATE: 12/10/2023, 08:42:07
// PROBLEM NAME: October Marathon
// PROBLEM URL: https://www.codechef.com/problems/OCTATHON
// PROBLEM DIFFICULTY RATTING: 319
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    
    if (x < 3)
        printf("GOLD");
    else if (x < 6)
        printf("SILVER");
    else
        printf("BRONZE");
    
	return 0;
}



