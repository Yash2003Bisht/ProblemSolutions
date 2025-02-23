// DATE: 13/02/2023, 07:20:16
// PROBLEM NAME: Chef and Memory Limit
// PROBLEM URL: https://www.codechef.com/problems/CBARG
// PROBLEM DIFFICULTY RATTING: 1255
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int m[n], total = 0;
        
        for (int i=0; i<n; i++)
            scanf("%lld", &m[i]);
            
        total = m[0];
            
        for (int i=0; i<n-1; i++)
            if (m[i] < m[i+1]) total += m[i+1] - m[i];

        
        printf("%lld\n", total);
        
    }
    
	return 0;
}



