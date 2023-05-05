// DATE: 05/05/2023, 08:50:51
// PROBLEM NAME: Chef and Stones
// PROBLEM URL: https://www.codechef.com/problems/CHEFSTON
// PROBLEM DIFFICULTY RATTING: 1327
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, k, i, max_profit, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &k);
        long long int a[n], b[n];
        max_profit = 0;

        for (i=0; i<n*2; i++){
            if (i<n)
                scanf("%lld", &a[i]);
            else
                scanf("%lld", &b[i-n]);
        }

        
        for (int i=0; i<n; i++){
            total = (k/a[i])*b[i];
            if (total > max_profit)
                max_profit = total;
        }
        
        printf("%lld\n", max_profit);
        
    }
    
	return 0;
}



