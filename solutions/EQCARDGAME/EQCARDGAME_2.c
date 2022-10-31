// QUESTION URL: https://www.codechef.com/problems/EQCARDGAME

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



