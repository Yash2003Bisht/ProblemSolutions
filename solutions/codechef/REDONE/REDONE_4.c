// DATE: 30/11/2023, 08:43:13
// PROBLEM NAME: Reduce to One
// PROBLEM URL: https://www.codechef.com/problems/REDONE
// PROBLEM DIFFICULTY RATTING: 1507
// STATUS: accepted
// TIME: 0.04
// MEMORY: 9.2M

#include <stdio.h>
#define lld long long int
#define mod 1000000007
#define size 1000000

int main(void) {
    int t, n;
    lld ans, pre_compute[size];
    pre_compute[0] = 1;

    for (int i=2; i<=size; i++)
        pre_compute[i-1] = (pre_compute[i-2]+i+pre_compute[i-2]*i) % mod;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        ans = pre_compute[n-1];
        printf("%lld\n", ans);
    }

	return 0;
}



