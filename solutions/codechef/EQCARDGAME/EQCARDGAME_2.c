// DATE: 31/10/2022, 06:24:14
// PROBLEM NAME: Equal Card Game
// PROBLEM URL: https://www.codechef.com/problems/EQCARDGAME
// PROBLEM DIFFICULTY RATTING: 1058
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



