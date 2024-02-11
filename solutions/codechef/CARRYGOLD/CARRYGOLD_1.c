// DATE: 11/02/2024, 02:06:17
// PROBLEM NAME: Gold Mining
// PROBLEM URL: https://www.codechef.com/problems/CARRYGOLD
// PROBLEM DIFFICULTY RATTING: 880
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, n, x, y, total;
	scanf("%d", &t);

	while(t--){
	    scanf("%d%d%d", &n, &x, &y);

	    total = (n+1)*y;

	    if (total >= x)
	        printf("YES\n");
	    else
	        printf("NO\n");

	}

}


