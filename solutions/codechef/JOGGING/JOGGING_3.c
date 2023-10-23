// DATE: 23/10/2023, 08:49:52
// PROBLEM NAME: Jogging
// PROBLEM URL: https://www.codechef.com/problems/JOGGING
// PROBLEM DIFFICULTY RATTING: 1484
// STATUS: accepted
// TIME: 0.03
// MEMORY: 9.1M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t, n, x;
    lld ans, pre_arr[1000000];
    pre_arr[0] = 1, pre_arr[1] = 1;

    for (int i=2; i<1000000; i++)
        pre_arr[i] = (pre_arr[i-1] * 2) % 1000000007;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &x);
        x = n == 1 ? x : x*2;
        ans = (x * pre_arr[n-1]) % 1000000007;
        printf("%lld\n", ans);
    }

	return 0;
}



