// DATE: 20/06/2023, 08:09:14
// PROBLEM NAME: Obtain the Sum
// PROBLEM URL: https://www.codechef.com/problems/BIGARRAY
// PROBLEM DIFFICULTY RATTING: 1368
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long n, s, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &s);
        diff = (((n+1)*n)/2) - s;
        
        if (diff >= 1 && diff <= n)
            printf("%lld\n", diff);
        else
            printf("-1\n");
        
    }
    
	return 0;
}



