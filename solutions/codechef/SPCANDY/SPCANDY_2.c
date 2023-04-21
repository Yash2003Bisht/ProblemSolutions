// DATE: 21/04/2023, 07:22:35
// PROBLEM NAME: Splitting Candies
// PROBLEM URL: https://www.codechef.com/problems/SPCANDY
// PROBLEM DIFFICULTY RATTING: 1314
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &k);
        
        if (k > 0)
            printf("%lld %lld\n", n/k, n%k);
        else
            printf("0 %lld\n", n);

    }
    
	return 0;
}



