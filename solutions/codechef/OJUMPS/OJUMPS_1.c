// DATE: 24/01/2023, 07:35:49
// PROBLEM NAME: Chef-jumping
// PROBLEM URL: https://www.codechef.com/problems/OJUMPS
// PROBLEM DIFFICULTY RATTING: 1232
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    long long int n;
    scanf("%lld", &n);
    
    if (n%3 == 0 || (n-1)%6 == 0) printf("yes\n");
    else printf("no\n");
    
	return 0;
}



