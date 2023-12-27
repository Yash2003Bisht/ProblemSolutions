// DATE: 27/12/2023, 09:14:11
// PROBLEM NAME: Good Quality Bulbs
// PROBLEM URL: https://www.codechef.com/problems/BULBLIFE
// PROBLEM DIFFICULTY RATTING: 846
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, x, a, total, num;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        total = 0;

        for (int i=0; i<n-1; i++){
            scanf("%d", &a);
            total += a;
        }

        num = x*n - total;
        printf("%d\n", max(0, num));

    }
    
}



