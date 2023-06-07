// DATE: 07/06/2023, 07:56:43
// PROBLEM NAME: Bowling Strategy
// PROBLEM URL: https://www.codechef.com/problems/BOWLERS
// PROBLEM DIFFICULTY RATTING: 1366
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, k, l, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &k, &l);
        
        if (n > k*l || (k == 1 && n > 1))
            printf("-1\n");
        else{
            temp = 1;
            while (n > 0){
                printf("%d ", temp);
                
                if (temp == k)
                    temp = 0;
                
                temp++;
                n--;
            }
            printf("\n");
        }
            
        
    }

	return 0;
}



