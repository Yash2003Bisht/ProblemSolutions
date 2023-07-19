// DATE: 19/07/2023, 07:56:42
// PROBLEM NAME: Xor Equality
// PROBLEM URL: https://www.codechef.com/problems/XOREQUAL
// PROBLEM DIFFICULTY RATTING: 1405
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>
#define modulo 1000000007
#define max_n 100000

int main(void) {
    int t, n, counter[max_n];
    counter[0] = 1;

    for (int i=1; i<max_n; i++)
        counter[i] = (counter[i-1]*2) % modulo;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        printf("%d\n", counter[n-1]);
    }

	return 0;
}



