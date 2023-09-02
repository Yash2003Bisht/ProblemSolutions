// DATE: 31/08/2023, 12:01:34
// PROBLEM NAME: Elections in Chefland
// PROBLEM URL: https://www.codechef.com/problems/ELECTN
// PROBLEM DIFFICULTY RATTING: 604
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, a, x, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (a >= x)
                total++;
            
        }
        
        printf("%d\n", total);
        
    }
    
	return 0;
}



