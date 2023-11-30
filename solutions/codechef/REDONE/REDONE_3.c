// DATE: 30/11/2023, 08:43:39
// PROBLEM NAME: Reduce to One
// PROBLEM URL: https://www.codechef.com/problems/REDONE
// PROBLEM DIFFICULTY RATTING: 1507
// STATUS: partially accepted
// TIME: 1.00
// MEMORY: 1.6M

#include <stdio.h>
#define mod 1000000007

int main(void) {
    int t, n;
    long long int ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        ans = 1;

        for (int i=2; i<=n; i++)
            ans = (ans+i+ans*i) % mod;

        printf("%lld\n", ans);

    }

	return 0;
}


