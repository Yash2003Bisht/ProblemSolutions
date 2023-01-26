// QUESTION URL: https://www.codechef.com/problems/EQUALCOIN
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        if ((x+(y*2)) % 2 == 0) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}



