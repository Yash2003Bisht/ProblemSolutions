// DATE: 31/10/2023, 08:44:55
// PROBLEM NAME: Yet another subarray problem
// PROBLEM URL: https://www.codechef.com/problems/SUBPRB
// PROBLEM DIFFICULTY RATTING: 1478
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, counter;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        counter = 1;

        for (int i=0; i<n; i++){
            printf("%d ", counter);
            counter += 2;
        }
        printf("\n");

    }

	return 0;
}



