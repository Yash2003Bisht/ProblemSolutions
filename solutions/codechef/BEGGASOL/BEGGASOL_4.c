// DATE: 01/03/2023, 07:16:05
// PROBLEM NAME: Gasoline Introduction
// PROBLEM URL: https://www.codechef.com/problems/BEGGASOL
// PROBLEM DIFFICULTY RATTING: 1263
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int f[n], unit = 0, counter = 1, gasoline;

        for (int i=0; i<n; i++)
            scanf("%d", &f[i]);
        
        gasoline = f[0];
        
        while(gasoline){
            if (counter < n){
                gasoline += f[counter];
                counter++;
            }
            
            gasoline -= 1;
            unit += 1;
        }
        
        printf("%d\n", unit);

    }
    
	return 0;
}



