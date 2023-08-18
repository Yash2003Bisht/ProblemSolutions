// DATE: 18/08/2023, 08:57:13
// PROBLEM NAME: Maximum Angriness
// PROBLEM URL: https://www.codechef.com/problems/MAXAGRY
// PROBLEM DIFFICULTY RATTING: 1432
// STATUS: wrong answer
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>
#define lld unsigned long long

int main(void) {
    int t;
    lld n, k, total_angriness, k_range_sum;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &n, &k);
        
        if (k >= n/2){
            total_angriness = (n-1)*n/2;
            printf("%lld\n", total_angriness);
        } else{
            k_range_sum = (k-1)*k/2;
            total_angriness = (k*n-k_range_sum) + (n-k*2) + (k*k - k_range_sum);
            printf("%lld\n", total_angriness);
        }
        
    }

	return 0;
}



