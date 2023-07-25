// DATE: 25/07/2023, 08:00:54
// PROBLEM NAME: Different Medians
// PROBLEM URL: https://www.codechef.com/problems/DIFFMED
// PROBLEM DIFFICULTY RATTING: 1408
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, i;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        for (i=0; i<n/2; i++)
            printf("%d %d ", n-i, i+1);

        if (n%2 != 0)
            printf("%d ", n-i);

        printf("\n");

    }

	return 0;
}



