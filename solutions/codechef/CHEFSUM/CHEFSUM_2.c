// DATE: 23/02/2023, 07:42:45
// PROBLEM NAME: Little Chef and Sums
// PROBLEM URL: https://www.codechef.com/problems/CHEFSUM
// PROBLEM DIFFICULTY RATTING: 1252
// STATUS: accepted
// TIME: 0.10
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t, n, a, idx, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = INT_MAX;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (a < total){
                total = a;
                idx = i+1;
            }

        }
        
        printf("%d\n", idx);

    }
    
	return 0;
}



