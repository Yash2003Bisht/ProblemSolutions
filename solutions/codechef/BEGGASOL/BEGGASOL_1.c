// DATE: 01/03/2023, 07:31:18
// PROBLEM NAME: Gasoline Introduction
// PROBLEM URL: https://www.codechef.com/problems/BEGGASOL
// PROBLEM DIFFICULTY RATTING: 1263
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, f, unit, gasoline;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        unit = 0, gasoline = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &f);
            
            if (i == 0)
                gasoline = f;
            
            else if (gasoline != 0){
                gasoline = gasoline + f - 1;
                unit++;
            }
            
        }

        printf("%d\n", unit+gasoline);

    }
    
	return 0;
}



