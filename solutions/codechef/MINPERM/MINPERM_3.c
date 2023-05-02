// DATE: 02/05/2023, 07:16:05
// PROBLEM NAME: Minimum Good Permutation
// PROBLEM URL: https://www.codechef.com/problems/MINPERM
// PROBLEM DIFFICULTY RATTING: 1315
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%2 == 0){
            for (int i=1; i<=n; i++){
                if (i%2 == 0)
                    printf("%d ", i-1);
                else
                    printf("%d ", i+1);
            }
        } else {
            for (int i=1; i<n; i++){
                if (i == n-1)
                    printf("%d %d", n, i-1);
                else if (i%2 == 0)
                    printf("%d ", i-1);
                else
                    printf("%d ", i+1);
            }
        }
        
        printf("\n");
        
    }
    
	return 0;
}



