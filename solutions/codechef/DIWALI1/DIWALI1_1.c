// DATE: 30/10/2023, 08:25:36
// PROBLEM NAME: Maximum Light Up
// PROBLEM URL: https://www.codechef.com/problems/DIWALI1
// PROBLEM DIFFICULTY RATTING: 1481
// STATUS: accepted
// TIME: 0.05
// MEMORY: 1.6M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define lld long long int

int main(void) {
    int t;
    lld p, a, b, c, x, y, per_price, total_anar, total_chakri;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld%lld%lld%lld%lld", &p, &a, &b, &c, &x, &y);

        // -- anar
        per_price = (a*x) + b;
        total_anar = p / per_price;

        // -- chakri
        per_price = (a*y) + c;
        total_chakri = p / per_price;

        // -- stdout max number
        printf("%lld\n", max(total_anar, total_chakri));

    }

	return 0;
}



