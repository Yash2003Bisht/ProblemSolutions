// DATE: 20/04/2023, 08:14:31
// PROBLEM NAME: Split and Maximize
// PROBLEM URL: https://www.codechef.com/problems/SPLITMAX
// PROBLEM DIFFICULTY RATTING: 1313
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int c, total = 0, ans;
        
        for (int i=0; i<n; i++){
            scanf("%lld", &c);
            total += c;
        }
        
        ans = ((total%998244353)*((total-1)%998244353)) % 998244353;
        printf("%lld\n", ans);
        
    }
    
	return 0;
}



