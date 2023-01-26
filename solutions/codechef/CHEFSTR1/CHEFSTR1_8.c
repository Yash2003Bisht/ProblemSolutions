// QUESTION URL: https://www.codechef.com/problems/CHEFSTR1
// STATUS: accepted
// TIME: 0.10
// MEMORY: 5.2M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long int t, n, diff;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        long long int s[n], total = 0;
        
        for (int i=0; i<n; i++)
            scanf("%lld", &s[i]);
            
        for (int i=0; i<n-1; i++){
            diff = abs(s[i+1]-s[i]);
            total += diff>=1?(diff-1):diff;
        }
        
        printf("%lld\n", total);
        
    }
    
	return 0;
}



