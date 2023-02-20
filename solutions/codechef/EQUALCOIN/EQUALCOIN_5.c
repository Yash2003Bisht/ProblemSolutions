// DATE: 24/01/2023, 07:50:22
// PROBLEM NAME: Equal Coins
// PROBLEM URL: https://www.codechef.com/problems/EQUALCOIN
// PROBLEM DIFFICULTY RATTING: 1233
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        if (x % 2 == 0 && y % 2 == 0) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}



