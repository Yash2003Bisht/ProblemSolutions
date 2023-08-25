// DATE: 25/08/2023, 08:15:39
// PROBLEM NAME: Chef and the stones
// PROBLEM URL: https://www.codechef.com/problems/CHEFST
// PROBLEM DIFFICULTY RATTING: 1441
// STATUS: partially accepted
// TIME: 2.00
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
        
        while(m && n1 && n2){
            x = min(min(n1, n2), m);
            n1 -= x, n2 -= x, m--;
        }

        printf("%lld\n", n1+n2);

    }
    
	return 0;
}



