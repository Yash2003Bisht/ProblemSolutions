// QUESTION URL: https://www.codechef.com/problems/QUEENATTACK

#include <stdio.h>
#define MIN(a,b) (a>b?b:a)

int main(void) {
    int t, n, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &y);
        printf("%d\n", (n*2)-2 + MIN(x-1, y-1) + MIN(n-x, y-1) + MIN(x-1, n-y) + MIN(n-x, n-y));
        
    }
	return 0;
}



