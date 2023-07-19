// DATE: 19/07/2023, 08:39:43
// PROBLEM NAME: Xor Equality
// PROBLEM URL: https://www.codechef.com/problems/XOREQUAL
// PROBLEM DIFFICULTY RATTING: 1405
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>
#define modulo 1000000007
#define ll long long

ll power_off(ll a, ll b){
    // base case
    if (b==0)
        return 1;

    // recursive call
    ll temp = power_off(a, b/2);
    
    if (b%2 != 0)
        return (a*temp*temp) % modulo;
    else
        return (temp*temp) % modulo;

}

int main(void) {
    int t, n;
    ll ans;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        ans = power_off(2, n-1);
        printf("%llu\n", ans % modulo);
    }

	return 0;
}



