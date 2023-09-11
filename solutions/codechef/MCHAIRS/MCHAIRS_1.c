// DATE: 11/09/2023, 08:13:21
// PROBLEM NAME: Missing some chairs
// PROBLEM URL: https://www.codechef.com/problems/MCHAIRS
// PROBLEM DIFFICULTY RATTING: 1456
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define lld long long int
#define modulo 1000000007

int main(void) {
    int t, n;
    lld a, b;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        a = 1, b = 2;

        while (n){
            if (n%2 != 0)
                a = (a * b) % modulo;
            b = (b * b) % modulo;
            n /= 2;
        }
        
        printf("%lld\n", a-1);

    }

	return 0;
}



