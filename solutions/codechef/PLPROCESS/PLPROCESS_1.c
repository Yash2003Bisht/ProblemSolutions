// DATE: 11/08/2023, 08:16:10
// PROBLEM NAME: Parallel Processing
// PROBLEM URL: https://www.codechef.com/problems/PLPROCESS
// PROBLEM DIFFICULTY RATTING: 1425
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.8M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, i, j;
    long long int process_1, process_2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        process_1 = 0, process_2 = 0, i = 0, j = n-1;

        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        // for this problem while loop is better
        while (i<=j){
            if (process_1 < process_2)
                process_1 += arr[i], i++;
            else
                process_2 += arr[j], j--;
        }

        printf("%lld\n", max(process_1, process_2));

    }
    
	return 0;
}



