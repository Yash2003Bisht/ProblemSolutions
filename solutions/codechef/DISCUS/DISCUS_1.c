// DATE: 13/09/2023, 09:18:55
// PROBLEM NAME: Discus Throw
// PROBLEM URL: https://www.codechef.com/problems/DISCUS
// PROBLEM DIFFICULTY RATTING: 622
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, m1, m2, m3;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &m1, &m2, &m3);
        printf("%d\n", max(m1, max(m2, m3)));
    }
    
	return 0;
}


