// DATE: 20/04/2023, 08:10:47
// PROBLEM NAME: Split and Maximize
// PROBLEM URL: https://www.codechef.com/problems/SPLITMAX
// PROBLEM DIFFICULTY RATTING: 1313
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int c, total = 0;
        
        for (int i=0; i<n; i++){
            scanf("%lld", &c);
            total += c % 998244353;
        }
        
        printf("%lld\n", (total*(total-1)) % 998244353);
        
    }
    
	return 0;
}



