// DATE: 25/01/2024, 02:11:12
// PROBLEM NAME: International Education Day!
// PROBLEM URL: https://www.codechef.com/problems/IED
// PROBLEM DIFFICULTY RATTING: 271
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	printf("%d\n", max(a*c, b*c));
	
}



