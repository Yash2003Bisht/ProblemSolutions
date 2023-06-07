// DATE: 07/06/2023, 07:57:32
// PROBLEM NAME: Bowling Strategy
// PROBLEM URL: https://www.codechef.com/problems/BOWLERS
// PROBLEM DIFFICULTY RATTING: 1366
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, k, l;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &k, &l);
        
        if (n > k*l || (k == 1 && n > 1))
            printf("-1\n");
        else{
            while (n > 0){
                k = min(n, k);
                for (int i=1; i<=k; i++)
                    printf("%d ", i);
                n -= k;
            }
            printf("\n");
        }
            
        
    }

	return 0;
}



