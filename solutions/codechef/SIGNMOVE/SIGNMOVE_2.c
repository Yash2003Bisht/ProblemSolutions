// QUESTION URL: https://www.codechef.com/problems/SIGNMOVE
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        if (n%2 == 0) printf("%d\n", n/2);
        else printf("%d\n", -(n/2 + 1));
        
        
    }
	return 0;
}



