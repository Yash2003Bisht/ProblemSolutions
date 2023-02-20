// DATE: 16/11/2022, 06:25:13
// PROBLEM NAME: Chef and Strings
// PROBLEM URL: https://www.codechef.com/problems/CHEFSTR1
// PROBLEM DIFFICULTY RATTING: 1094
// STATUS: accepted
// TIME: 0.09
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int s[n], diff, total=0;
        
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



