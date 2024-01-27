// DATE: 27/01/2024, 09:32:29
// PROBLEM NAME: Not Prime Permutation
// PROBLEM URL: https://www.codechef.com/problems/NPRPE
// PROBLEM DIFFICULTY RATTING: 1447
// STATUS: accepted
// TIME: 0.06
// MEMORY: 2.2M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int p[n];

        for (int i=0; i<n; i++)
            scanf("%d", &p[i]);

        if (n < 3)
            printf("-1\n");
        else {
            for (int i=0; i<n; i++){
                if (p[i] == 1)
                    printf("3 ");
                else if (p[i] == 3)
                    printf("1 ");
                else
                    printf("%d ", p[i]);
            }
            printf("\n");
        }

    }
    
}



