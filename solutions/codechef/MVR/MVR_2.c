// DATE: 14/07/2023, 07:38:20
// PROBLEM NAME: Messi vs Ronaldo
// PROBLEM URL: https://www.codechef.com/problems/MVR
// PROBLEM DIFFICULTY RATTING: 316
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int a, b, x, y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    
    if ((a*2)+b > (x*2)+y)
        printf("Messi\n");
    else if ((a*2)+b < (x*2)+y)
        printf("Ronaldo\n");
    else
        printf("Equal\n");
	return 0;
}



