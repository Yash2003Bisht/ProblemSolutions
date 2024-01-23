// DATE: 23/01/2024, 02:58:25
// PROBLEM NAME: Valid Pair
// PROBLEM URL: https://www.codechef.com/problems/SOCKS1
// PROBLEM DIFFICULTY RATTING: 851
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	if (a == b || b == a || a == c)
	    printf("YES");
	else
	    printf("NO");
	
}



