// DATE: 31/10/2023, 08:43:38
// PROBLEM NAME: Yet another subarray problem
// PROBLEM URL: https://www.codechef.com/problems/SUBPRB
// PROBLEM DIFFICULTY RATTING: 1478
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, arr[1000] = {0};
    arr[0] = 1;

    for (int i=1; i<1000; i++)
        arr[i] = arr[i-1] + 2;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        for (int i=0; i<n; i++)
            printf("%d ", arr[i]);
        printf("\n");

    }

	return 0;
}



