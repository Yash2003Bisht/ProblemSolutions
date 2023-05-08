// DATE: 08/05/2023, 05:30:36
// PROBLEM NAME: Chess Ratings
// PROBLEM URL: https://www.codechef.com/problems/C_RATING
// PROBLEM DIFFICULTY RATTING: 651
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", (y-x)%8 == 0 ? (y-x)/8 : ((y-x)/8) + 1 );
    }
    
	return 0;
}



