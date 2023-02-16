// QUESTION URL: https://www.codechef.com/problems/JERRYCHASE
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x >= y) printf("NO\n");
        else printf("YES\n");
        
    }
    
	return 0;
}



