// DATE: 16/06/2023, 07:32:09
// PROBLEM NAME: The Deadly Sin
// PROBLEM URL: https://www.codechef.com/problems/SINS
// PROBLEM DIFFICULTY RATTING: 1372
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

long long int gcd(long long int a, long long int b){
    if (b == 0)
        return a;
    
    return gcd(b, a%b);
    
}

int main(void) {
    int t;
    long long int x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &x, &y);
        printf("%lld\n", gcd(x,y)*2);
    }
    
	return 0;
}


