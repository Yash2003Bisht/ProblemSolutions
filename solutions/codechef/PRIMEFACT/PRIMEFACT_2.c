// DATE: 06/03/2023, 04:31:14
// PROBLEM NAME: Add smallest prime factor
// PROBLEM URL: https://www.codechef.com/problems/PRIMEFACT
// PROBLEM DIFFICULTY RATTING: 1272
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int smallest_prime(int num){
    if (num % 3 == 0)
        return 3;
    else if (num % 5 == 0)
        return 5;
    else
        return 7;
}

int main(void) {
    int t, x;
    long long int y, ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &x, &y);
        ans = 0;

        if (x%2 != 0){
            ans = 1;
            x += smallest_prime(x);
        }
        ans += ceil((double) (y-x)/2);
        printf("%lld\n", ans);
        
    }
    
	return 0;
}



