// DATE: 21/08/2023, 08:37:05
// PROBLEM NAME: Spliting Balls
// PROBLEM URL: https://www.codechef.com/problems/SPBALL
// PROBLEM DIFFICULTY RATTING: 1435
// STATUS: accepted
// TIME: 0.03
// MEMORY: 9.1M

#include <stdio.h>
#define lld long long int
#define modulo 1000000007
#define limit 1000001

void precompute_factorial(lld* arr){
    arr[0] = arr[1] = 1;
    
    for (int i=2; i<limit; i++)
        arr[i] = (arr[i-1] * i) % modulo;
    
}

int main(void) {
    int t, n, a;
    lld ans;
    scanf("%d", &t);

    lld precomputed_fact[limit];
    precompute_factorial(precomputed_fact);

    while(t--){
        scanf("%d", &n);
        ans = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            ans = (ans + precomputed_fact[a]) % modulo;
        }

        printf("%lld\n", ans);

    }
    
	return 0;
}



