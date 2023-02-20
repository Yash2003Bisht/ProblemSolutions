// DATE: 08/12/2022, 07:42:00
// PROBLEM NAME: Chef and Proportion
// PROBLEM URL: https://www.codechef.com/problems/CHEFCBA
// PROBLEM DIFFICULTY RATTING: 1122
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    if (a*b == c*d || a*c == b*d || a*d == c*b) printf("Possible");
    else printf("Impossible");
    
    
	return 0;
}



