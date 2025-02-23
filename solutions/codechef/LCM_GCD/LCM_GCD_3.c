// DATE: 14/06/2023, 07:24:07
// PROBLEM NAME: Lcm hates Gcd
// PROBLEM URL: https://www.codechef.com/problems/LCM_GCD
// PROBLEM DIFFICULTY RATTING: 1369
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>

long long int gcd(long long int a, long long int b){
    if (b == 0)
        return a;
    
    return gcd(b, a%b);
    
}

long long int lcm(long long int a, long long int b){
    return a*b/gcd(a, b);
}


int main(void) {
    int t;
    long long int a, b, divisor;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &a, &b);
        divisor = gcd(a ,b);
        printf("%lld\n", lcm(a, divisor) - gcd(b, divisor));
    }

	return 0;
}



