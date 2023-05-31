// DATE: 31/05/2023, 07:24:40
// PROBLEM NAME: Fake GCD
// PROBLEM URL: https://www.codechef.com/problems/FAKEGCD
// PROBLEM DIFFICULTY RATTING: 1362
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        for (int i=1; i<=n; i++)
            printf("%d ", i);
        printf("\n");
    }

	return 0;
}



