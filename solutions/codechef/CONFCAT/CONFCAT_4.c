// DATE: 10/10/2023, 08:13:39
// PROBLEM NAME: Confusing Concatenations
// PROBLEM URL: https://www.codechef.com/problems/CONFCAT
// PROBLEM DIFFICULTY RATTING: 1488
// STATUS: accepted
// TIME: 0.16
// MEMORY: 1.9M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int get_max(int arr[], int size, int *max_idx){
    int value = arr[0];
    *max_idx = 0;
    
    for (int i=1; i<size; i++){
        if (arr[i] > value){
            value = arr[i];
            *max_idx = i;
        }
    }

    return value;
}

int main(void) {
    int t, n, max_value, idx;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int c[n];

        for (int i=0; i<n; i++)
            scanf("%d", &c[i]);

        max_value = get_max(c, n, &idx);

        if (max_value == c[0])
            printf("-1\n");
        else {
            printf("%d\n", idx);
            for (int i=0; i<idx; i++)
                printf("%d ", c[i]);

            printf("\n%d\n", n - idx);
            for (int i=idx; i<n; i++)
                printf("%d ", c[i]);

            printf("\n");

        }

    }

	return 0;
}



