// DATE: 04/12/2023, 08:34:19
// PROBLEM NAME: Magda and Silly Pairs
// PROBLEM URL: https://www.codechef.com/problems/SILLYPRS
// PROBLEM DIFFICULTY RATTING: 1507
// STATUS: accepted
// TIME: 0.16
// MEMORY: 1.9M

#include <stdio.h>
#include <stdlib.h>
#define min(a,b)(a>b?b:a)
#define lld long long int

int main(void) {
    int t, n, even_a, even_b, odd_a, odd_b;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        even_a = 0, even_b = 0, odd_a = 0, odd_b = 0;
        lld a, b, mismatch_pairs, sum_a = 0, sum_b = 0;

        for (int i=0; i<n*2; i++){
            if (i < n){
                scanf("%d", &a);
                sum_a += a;

                if (a%2 == 0)
                    even_a++;
                else
                    odd_a++;

            } else{
                scanf("%d", &b);
                sum_b += b;

                if (b%2 == 0)
                    even_b++;
                else
                    odd_b++;

            }
        }

        mismatch_pairs = n - (min(even_a, even_b) + min(odd_a, odd_b));
        printf("%lld\n", ((sum_a + sum_b) / 2) - (mismatch_pairs / 2));

    }
    
	return 0;
}



