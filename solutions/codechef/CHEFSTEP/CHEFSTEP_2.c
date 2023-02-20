// DATE: 29/11/2022, 06:45:18
// PROBLEM NAME: Chef and Steps
// PROBLEM URL: https://www.codechef.com/problems/CHEFSTEP
// PROBLEM DIFFICULTY RATTING: 1110
// STATUS: accepted
// TIME: 0.15
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, i;
    long long int k, d;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &k);
        
        for (i=0; i<n; i++){
            scanf("%lld", &d);
            
            if (d%k == 0) printf("1");
            else printf("0");
        }
        
        printf("\n");
        
    }
    
	return 0;
}



