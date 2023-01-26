// QUESTION URL: https://www.codechef.com/problems/COUNTP
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a, odd_count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        odd_count = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a%2 != 0) odd_count++;
        }
        
        if (odd_count%2 == 0 && odd_count > 0) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
	
}



