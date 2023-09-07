// DATE: 06/09/2023, 08:38:08
// PROBLEM NAME: All New CodeChef
// PROBLEM URL: https://www.codechef.com/problems/NEWCC
// PROBLEM DIFFICULTY RATTING: 354
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    
    if (x == y)
        printf("Same\n");
    else if (x > y)
        printf("New\n");
    else
        printf("Old\n");
    
	return 0;
}



