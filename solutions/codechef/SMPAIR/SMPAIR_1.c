// DATE: 24/05/2023, 07:18:29
// PROBLEM NAME: The Smallest Pair
// PROBLEM URL: https://www.codechef.com/problems/SMPAIR
// PROBLEM DIFFICULTY RATTING: 1352
// STATUS: accepted
// TIME: 0.09
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t, n, a, min_1, min_2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min_1 = INT_MAX, min_2 = INT_MAX;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (min_1 > a){
                min_2 = min_1;
                min_1 = a;
            } else if (min_2 > a)
                min_2 = a;
            
        }

        printf("%d\n", min_1 + min_2);
        
    }
    
	return 0;
}



