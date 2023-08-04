// DATE: 04/08/2023, 07:10:27
// PROBLEM NAME: Equality
// PROBLEM URL: https://www.codechef.com/problems/EQUALITY
// PROBLEM DIFFICULTY RATTING: 1419
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.8M

#include <stdio.h>

int main(void) {
    int t, n;
    long long int total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int arr[n];
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%lld", &arr[i]);
            total += arr[i];
        }

        total = total/(n-1);

        for (int i=0; i<n; i++)
            printf("%lld ", total-arr[i]);
        
        printf("\n");

    }
    
	return 0;
}



