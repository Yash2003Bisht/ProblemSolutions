// DATE: 20/06/2023, 08:04:27
// PROBLEM NAME: Obtain the Sum
// PROBLEM URL: https://www.codechef.com/problems/BIGARRAY
// PROBLEM DIFFICULTY RATTING: 1368
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long n, s, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &s);
        total = ((n+1)*n)/2;
        
        if (total <= s || total-s > n)
            printf("-1\n");
        else
            printf("%lld\n", total - s);
        
    }
    
	return 0;
}



