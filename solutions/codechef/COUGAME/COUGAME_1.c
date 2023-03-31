// DATE: 31/03/2023, 09:22:13
// PROBLEM NAME: Couple Game
// PROBLEM URL: https://www.codechef.com/problems/COUGAME
// PROBLEM DIFFICULTY RATTING: 347
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, g, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &g, &b);
        printf("%d\n", b-g);
    }
    
	return 0;
}



