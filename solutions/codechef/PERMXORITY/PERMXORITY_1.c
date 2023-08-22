// DATE: 22/08/2023, 07:55:32
// PROBLEM NAME: Permutation Xority
// PROBLEM URL: https://www.codechef.com/problems/PERMXORITY
// PROBLEM DIFFICULTY RATTING: 1437
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n > 2){
            if (n%2 != 0){
                for (int i=1; i<=n; i++)
                    printf("%d ", i);
            } else {
                printf("%d %d ", n, 1);
                
                for (int i=n-1; i>1; i--)
                    printf("%d ", i);
            }
        } else 
            printf("-1");

        printf("\n");
        
    }
    
	return 0;
}


