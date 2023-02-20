// DATE: 23/01/2023, 07:17:21
// PROBLEM NAME: EVM Hacking
// PROBLEM URL: https://www.codechef.com/problems/EVMHACK
// PROBLEM DIFFICULTY RATTING: 1223
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a>b? b : a)
#define max(a, b)(a>b? a : b)

int main(void) {
    int t, a, b, c, p, q, r, total_cast, total_projected, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d%d", &a, &b, &c, &p, &q, &r);
        total_cast = p+q+r;
        total_projected = a+b+c;

        temp  = min(a, b);
        temp = min(temp, c);
        total_projected -= temp;
        
        temp = max(p, q);
        temp = max(temp, r);
        total_projected += temp;
        
        if (total_projected > (float) total_cast/2) printf("YES\n");
        else printf("NO\n");
        
    }
	return 0;
}



