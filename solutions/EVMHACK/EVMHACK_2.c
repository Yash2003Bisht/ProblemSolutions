// QUESTION URL: https://www.codechef.com/problems/EVMHACK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#define max(a, b)(a>b? a : b)

int main(void) {
    int t, a, b, c, p, q, r, total_cast, total_projected;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d%d", &a, &b, &c, &p, &q, &r);
        total_cast = p+q+r;
        total_projected = a+b+c;
        total_projected += max(max(p-a, q-b), r-c);

        if (total_projected > total_cast/2) printf("YES\n");
        else printf("NO\n");

    }
	return 0;
}



