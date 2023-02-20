// DATE: 24/01/2023, 08:10:58
// PROBLEM NAME: Equal Coins
// PROBLEM URL: https://www.codechef.com/problems/EQUALCOIN
// PROBLEM DIFFICULTY RATTING: 1233
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        if (x%2 == 0 && (y%2 == 0 || x!=0)) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}


