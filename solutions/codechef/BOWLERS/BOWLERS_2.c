// DATE: 07/06/2023, 08:00:37
// PROBLEM NAME: Bowling Strategy
// PROBLEM URL: https://www.codechef.com/problems/BOWLERS
// PROBLEM DIFFICULTY RATTING: 1366
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, k, l, bowler;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &k, &l);
        
        if (n > k*l || (k == 1 && n > 1))
            printf("-1\n");
        else{
            bowler = 1;
            while (n > 0){
                printf("%d ", bowler);
                bowler = k == bowler ? 1 : bowler + 1;
                n--;
            }
            printf("\n");
        }
            
        
    }

	return 0;
}



