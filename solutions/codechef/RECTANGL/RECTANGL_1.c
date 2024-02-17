// DATE: 17/02/2024, 07:03:53
// PROBLEM NAME: Rectangle
// PROBLEM URL: https://www.codechef.com/problems/RECTANGL
// PROBLEM DIFFICULTY RATTING: 1146
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, a, b, c, d;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d%d%d", &a, &b, &c, &d);

        if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
            printf("YES\n");
        else
            printf("NO\n");

	}
	
}



