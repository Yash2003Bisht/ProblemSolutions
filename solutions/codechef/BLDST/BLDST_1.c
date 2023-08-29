// DATE: 28/08/2023, 08:14:23
// PROBLEM NAME: Ball Distribution
// PROBLEM URL: https://www.codechef.com/problems/BLDST
// PROBLEM DIFFICULTY RATTING: 1442
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, m, a, total;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);
        total = 0;

        for (int i=0; i<m; i++){
            scanf("%d", &a);
            total = total + a;
        }

        total = n - (n*m - total);

        if (total > 0)
            printf("%d\n", total);
        else
            printf("0\n");

    }

	return 0;
}



