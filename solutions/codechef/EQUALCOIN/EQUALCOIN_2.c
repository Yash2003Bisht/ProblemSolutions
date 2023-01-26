// QUESTION URL: https://www.codechef.com/problems/EQUALCOIN
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        // since we are checking x%2 == 0 first so, x>1 is not necessary
        if (x%2 == 0 && (y%2 == 0 || x!=0)) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}


