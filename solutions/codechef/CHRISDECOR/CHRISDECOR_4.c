// DATE: 15/01/2024, 09:22:09
// PROBLEM NAME: Decorating Christmas Tree
// PROBLEM URL: https://www.codechef.com/problems/CHRISDECOR
// PROBLEM DIFFICULTY RATTING: 1102
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
	int t, n, x, y;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d%d", &n, &x, &y);

        y = min(y/3, x);
        n -= y, x -= y;
        n -= x/2;

        if (n <= 0)
            printf("YES\n");
        else
            printf("NO\n");

	}
	
}



