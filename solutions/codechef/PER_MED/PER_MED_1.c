// DATE: 02/05/2023, 08:32:52
// PROBLEM NAME: Permutation And Median
// PROBLEM URL: https://www.codechef.com/problems/PER_MED
// PROBLEM DIFFICULTY RATTING: 1318
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        for (int i=1; i<=n; i++){
            if (i%2 != 0)
                printf("%d ", n-i/2);
            else
                printf("%d ", i/2);
        }

        printf("\n");

    }
    
	return 0;
}


