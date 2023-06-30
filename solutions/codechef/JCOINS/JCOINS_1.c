// DATE: 30/06/2023, 08:37:54
// PROBLEM NAME: Janmansh and Coins
// PROBLEM URL: https://www.codechef.com/problems/JCOINS
// PROBLEM DIFFICULTY RATTING: 527
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &x, &y);
        printf("%d\n", x*10 + y*5);
    }
    
	return 0;
}



