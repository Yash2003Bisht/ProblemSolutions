// DATE: 01/03/2023, 07:30:17
// PROBLEM NAME: Gasoline Introduction
// PROBLEM URL: https://www.codechef.com/problems/BEGGASOL
// PROBLEM DIFFICULTY RATTING: 1263
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, unit, gasoline;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int f[n];
        unit = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &f[i]);
        }
        
        gasoline = f[0];
        
        for (int i=1; i<n; i++){
            if (gasoline != 0){
                gasoline = gasoline + f[i] - 1;
                unit++;
            }
            
        }

        printf("%d\n", unit+gasoline);

    }
    
	return 0;
}



