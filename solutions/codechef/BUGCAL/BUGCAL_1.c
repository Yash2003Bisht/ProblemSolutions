// DATE: 03/06/2023, 08:08:45
// PROBLEM NAME: Buggy Calculator
// PROBLEM URL: https://www.codechef.com/problems/BUGCAL
// PROBLEM DIFFICULTY RATTING: 1363
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long int a, b, c, ans;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &a, &b);
        ans = 0, c = 1;

        while(a > 0 || b > 0){
            ans += ((a + b)%10) * c;
            a /= 10;
            b /= 10;
            c *= 10;
        }

        printf("%lld\n", ans);

    }
    
	return 0;
}



