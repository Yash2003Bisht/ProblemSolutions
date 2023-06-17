// DATE: 17/06/2023, 08:48:32
// PROBLEM NAME: The Gift
// PROBLEM URL: https://www.codechef.com/problems/CS2023_GIFT
// PROBLEM DIFFICULTY RATTING: 390
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int x, n, m;
    scanf("%d%d%d", &x, &n, &m);
    
    if (n <= x*m)
        printf("Yes");
    else
        printf("No");
    
	return 0;
}



