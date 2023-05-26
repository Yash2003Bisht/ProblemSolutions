// DATE: 26/05/2023, 08:12:19
// PROBLEM NAME: Appy and Contest
// PROBLEM URL: https://www.codechef.com/problems/HMAPPY2
// PROBLEM DIFFICULTY RATTING: 1358
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

long long gcd(long long a, long long b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main(void) {
    int t;
    long long n, a, b, k, i, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld%lld", &n, &a, &b, &k);
        count = (n / ((a*b) / gcd(a, b)))*2;
        
        if ((n/a + n/b) - count >= k)
            printf("Win\n");
        else
            printf("Lose\n");
        
        
    }

	return 0;
}



