// DATE: 22/04/2023, 01:06:56
// PROBLEM NAME: Two Numbers
// PROBLEM URL: https://www.codechef.com/problems/TWONMS
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    unsigned long long a, b, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%llu%llu%llu", &a, &b, &n);
        
        if (n%2 != 0)
            a *= 2;
        
        if (a >= b)
            printf("%lld\n", a/b);
        else
            printf("%lld\n", b/a);
        
    }
    
	return 0;
}



