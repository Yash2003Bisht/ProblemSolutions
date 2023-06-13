// DATE: 13/06/2023, 08:22:52
// PROBLEM NAME: Cards Game
// PROBLEM URL: https://www.codechef.com/problems/ICL1701
// PROBLEM DIFFICULTY RATTING: 1369
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int n, k, count = 0, j = 0;
    scanf("%d %d", &n, &k);
    int arr[n], counter[k];

    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for (int i=0; i<n; i++){
        if (arr[i] < 0){
            arr[i] = abs(arr[i]);
            counter[j] = i+1;
            count++;
            j++;

            if (i+1 < n)
                arr[i+1] = arr[i+1] - arr[i+1]*2;

        }
    }

    if (count){
        printf("%d\n", count);
        for (int i=0; i<count; i++)
            printf("%d ", counter[i]);
    } else
        printf("0\n");

	return 0;
}


