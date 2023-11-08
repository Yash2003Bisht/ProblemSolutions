// DATE: 08/11/2023, 09:01:18
// PROBLEM NAME: Magic Set
// PROBLEM URL: https://www.codechef.com/problems/MGCSET
// PROBLEM DIFFICULTY RATTING: 1472
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2.1M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t, n, m, count;
    lld total;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);
        int arr[n];
        count = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        
        for (int i=0; i<n; i++){
            if (arr[i]%m == 0)
                count++;
        }

        total = pow(2, count) - 1;
        printf("%lld\n", total);

    }
    
	return 0;
}


