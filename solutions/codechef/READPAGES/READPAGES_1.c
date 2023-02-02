// QUESTION URL: https://www.codechef.com/problems/READPAGES
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x, y;

    scanf("%d", &t);

    while(t--){

        scanf("%d%d%d", &n, &x, &y);
    
        if (x*y >= n) printf("YES\n");
        else printf("NO\n");
    

    }
	return 0;
}



