// DATE: 22/06/2023, 07:58:55
// PROBLEM NAME: Walk on the Axis
// PROBLEM URL: https://www.codechef.com/problems/ANUWTA
// PROBLEM DIFFICULTY RATTING: 1374
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long long int t, n;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        printf("%lld\n", (((n+2)*(n+1))/2)-1);
    }
    
	return 0;
}



