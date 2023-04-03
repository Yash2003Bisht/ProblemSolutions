// DATE: 03/04/2023, 08:12:20
// PROBLEM NAME: Prefix Permutation
// PROBLEM URL: https://www.codechef.com/problems/SUMPERM
// PROBLEM DIFFICULTY RATTING: 1289
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%2 != 0)
            printf("-1\n");
        else {
            for (int i=1; i<=n; i++){
                printf("%d %d ", i+1, i);
                i++;
            }
            printf("\n");
        }
        
    }
    
	return 0;
}



