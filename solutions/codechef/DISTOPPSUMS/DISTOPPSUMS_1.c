// DATE: 07/03/2023, 01:09:52
// PROBLEM NAME: Distinct Opposite Sums
// PROBLEM URL: https://www.codechef.com/problems/DISTOPPSUMS
// PROBLEM DIFFICULTY RATTING: 1135
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        for (int i=1; i<=n/2; i++)
            printf("%d ", i);

        for (int i=n; i>n/2; i--)
            printf("%d ", i);

        printf("\n");

    }

	return 0;
}



