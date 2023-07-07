// DATE: 07/07/2023, 08:42:42
// PROBLEM NAME: Daanish and Problems
// PROBLEM URL: https://www.codechef.com/problems/DIV03
// PROBLEM DIFFICULTY RATTING: 1388
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, arr[10], k, i;
    scanf("%d", &t);

    while(t--){
        for(i=0; i<10; i++)
            scanf("%d", &arr[i]);
        scanf("%d", &k);

        for (i=9; i>=0; i--){
            if (k >= arr[i])
                k -= arr[i];
            else
                break;
        }

        printf("%d\n", i+1);

    }

	return 0;
}



