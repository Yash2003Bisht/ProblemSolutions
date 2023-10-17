// DATE: 17/10/2023, 08:35:25
// PROBLEM NAME: Score High
// PROBLEM URL: https://www.codechef.com/problems/HIGHSCORE
// PROBLEM DIFFICULTY RATTING: 672
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, a, b, c, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        scanf("%d%d%d%d", &a, &b, &c, &d);
        printf("%d\n", max(max(a, max(b, c)), d));
    }
    
	return 0;
}



