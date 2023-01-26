// QUESTION URL: https://www.codechef.com/problems/OJUMPS
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



