// QUESTION URL: https://www.codechef.com/problems/MAX_DIFF
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, s;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &s);
        
        if (n >= s) printf("%d\n", s);
        else printf("%d\n", 2*n - s);
        
    }
    
	return 0;
}



