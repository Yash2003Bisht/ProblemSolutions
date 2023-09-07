// DATE: 06/09/2023, 08:11:55
// PROBLEM NAME: Task for Alexey
// PROBLEM URL: https://www.codechef.com/problems/ALEXTASK
// PROBLEM DIFFICULTY RATTING: 1449
// STATUS: accepted
// TIME: 0.03
// MEMORY: 1.6M

#include <stdio.h>
#include <limits.h>
#define min(a,b)(a>b?b:a)
#define lld long long int

lld gcd(lld a, lld b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

lld lcm(lld a, lld b){
    return (a / gcd(a, b)) * b;
}

int main(void) {
    int t, n;
    lld ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        lld arr[n];

        for (int i=0; i<n; i++)
            scanf("%lld", &arr[i]);

        ans = LONG_MAX;

        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++)
                ans = min(ans, lcm(arr[i], arr[j]));
        }

        printf("%lld\n", ans);

    }
    
	return 0;
}



