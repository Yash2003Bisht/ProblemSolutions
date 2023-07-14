// DATE: 14/07/2023, 07:39:22
// PROBLEM NAME: Messi vs Ronaldo
// PROBLEM URL: https://www.codechef.com/problems/MVR
// PROBLEM DIFFICULTY RATTING: 316
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int a, b, x, y, messi_total, ronaldo_total;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    messi_total = (a*2)+b, ronaldo_total = (x*2)+y;

    if (messi_total > ronaldo_total)
        printf("Messi\n");
    else if (messi_total < ronaldo_total)
        printf("Ronaldo\n");
    else
        printf("Equal\n");
	return 0;
}



