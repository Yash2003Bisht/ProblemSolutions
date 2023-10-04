// DATE: 04/10/2023, 07:23:52
// PROBLEM NAME: Exactly N plus 1 Values
// PROBLEM URL: https://www.codechef.com/problems/N1VALUES
// PROBLEM DIFFICULTY RATTING: 1495
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t, n;
    long long int total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        printf("1 1 ");

        if (n > 1){
            total = pow(2, n) - 2;

            for (int i=2; i<n; i++){
                printf("%d ", i);
                total -= i;
            }

            printf("%lld", total);
        }

        printf("\n");

    }

	return 0;
}


