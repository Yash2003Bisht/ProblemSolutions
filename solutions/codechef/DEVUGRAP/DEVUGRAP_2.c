// DATE: 10/06/2023, 07:40:03
// PROBLEM NAME: Devu and Grapes
// PROBLEM URL: https://www.codechef.com/problems/DEVUGRAP
// PROBLEM DIFFICULTY RATTING: 1343
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a>b?b:a)

int main(void) {
    int t, n, a;
    long long int k, ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &k);
        ans = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a > k)
                ans += min(a%k, (a/k + 1)*k - a);
            else
                ans += k-a;
        }
        
        printf("%lld\n", ans);
        
    }
    
	return 0;
}



