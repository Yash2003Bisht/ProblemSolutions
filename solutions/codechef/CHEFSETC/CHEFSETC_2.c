// QUESTION URL: https://www.codechef.com/problems/CHEFSETC
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, c, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        
        if (a == 0 || b == 0 || c == 0 || d == 0 || \
            a+b == 0 || a+c == 0 || a+d == 0 || \
            b+c == 0 || b+d == 0 || c+d == 0 || \
            a+b+c == 0 || a+c+d == 0 || b+c+d == 0 || \
            a+b+d == 0 || a+b+c+d == 0 ) printf("Yes\n");

        else printf("No\n");
        
    }
    
	return 0;
}



