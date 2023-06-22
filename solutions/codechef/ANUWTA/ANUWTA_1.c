// DATE: 22/06/2023, 07:59:11
// PROBLEM NAME: Walk on the Axis
// PROBLEM URL: https://www.codechef.com/problems/ANUWTA
// PROBLEM DIFFICULTY RATTING: 1374
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long long int t, n, total;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        total = (n*(n-1))/2 + n*2;
        printf("%lld\n", total);
    }
    
	return 0;
}


