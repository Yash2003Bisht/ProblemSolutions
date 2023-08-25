// DATE: 25/08/2023, 08:33:30
// PROBLEM NAME: Chef and the stones
// PROBLEM URL: https://www.codechef.com/problems/CHEFST
// PROBLEM DIFFICULTY RATTING: 1441
// STATUS: accepted
// TIME: 0.05
// MEMORY: 1.7M

#include <stdio.h>
#define lld long long int
#define min(a,b)(a>b?b:a)

int main(void) {
    int t;
    lld n1, n2, m, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld", &n1, &n2, &m);
        x = (m+1)*m/2;
        m = min(x, min(n1, n2));
        n1 -= m, n2 -= m;
        printf("%lld\n", n1+n2);
    }
    
	return 0;
}



