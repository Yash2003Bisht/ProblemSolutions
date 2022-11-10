// QUESTION URL: https://www.codechef.com/problems/EQCARDGAME
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &k);
        printf("%d\n", 52%k);
    }
	return 0;
}



