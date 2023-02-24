// DATE: 24/02/2023, 08:16:38
// PROBLEM NAME: Geometric Mean Inequality
// PROBLEM URL: https://www.codechef.com/problems/GMINEQ
// PROBLEM DIFFICULTY RATTING: 1254
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, a, positive, negative;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        positive = 0, negative = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (a == 1) positive++;
            else negative++;

        }
        
        if (abs(positive - negative) < 2) printf("Yes\n");
        else if (abs(positive - negative) == 2 && (positive%2 == 0 && negative%2 == 0)) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



