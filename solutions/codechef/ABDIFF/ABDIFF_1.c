// DATE: 03/07/2023, 08:04:19
// PROBLEM NAME: AB Difference
// PROBLEM URL: https://www.codechef.com/problems/ABDIFF
// PROBLEM DIFFICULTY RATTING: 347
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = abs(a*b - (a+b));
    printf("%d\n", ans);
	return 0;
}


