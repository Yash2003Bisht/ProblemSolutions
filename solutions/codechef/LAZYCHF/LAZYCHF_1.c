// DATE: 04/02/2024, 04:07:28
// PROBLEM NAME: Lazy Chef
// PROBLEM URL: https://www.codechef.com/problems/LAZYCHF
// PROBLEM DIFFICULTY RATTING: 801
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, x, m, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &m, &d);
        printf("%d\n", min(x*m, x+d));
    }
    
}



