// DATE: 23/10/2023, 09:07:49
// PROBLEM NAME: Jogging
// PROBLEM URL: https://www.codechef.com/problems/JOGGING
// PROBLEM DIFFICULTY RATTING: 1484
// STATUS: accepted
// TIME: 0.03
// MEMORY: 1.6M

#include <stdio.h>
#define lld long long int

lld power_mod(lld base, lld exponent, lld mod){
    lld result = 1;

    while (exponent){
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exponent /= 2;
    }

    return result;

}

int main(void) {
    int t, n, x, mod = 1000000007;
    lld ans;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &x);
        ans = power_mod(2, n-1, mod);
        ans = (x * ans) % mod;
        printf("%lld\n", ans);
    }

	return 0;
}



