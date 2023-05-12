// DATE: 12/05/2023, 06:00:56
// PROBLEM NAME: Monopoly
// PROBLEM URL: https://www.codechef.com/problems/MONOPOLY2
// PROBLEM DIFFICULTY RATTING: 578
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, p, q, r, s;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d\n", &p, &q, &r, &s);

        if (p > q+r+s || q > p+r+s || r > p+q+s || s > p+q+r)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



