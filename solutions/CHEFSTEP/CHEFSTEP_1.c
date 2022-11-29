// QUESTION URL: https://www.codechef.com/problems/CHEFSTEP
// STATUS: accepted
// TIME: 0.15
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, k, d;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        
        for (int i=0; i<n; i++){
            scanf("%d", &d);
            
            if (d%k == 0) printf("1");
            else printf("0");
        }
        
        printf("\n");
        
    }
    
	return 0;
}



