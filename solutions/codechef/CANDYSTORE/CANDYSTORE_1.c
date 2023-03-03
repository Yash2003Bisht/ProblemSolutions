// DATE: 03/03/2023, 08:31:28
// PROBLEM NAME: Candy Store
// PROBLEM URL: https://www.codechef.com/problems/CANDYSTORE
// PROBLEM DIFFICULTY RATTING: 429
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);

        if (y > x)
            total = x + (y-x)*2;
        else
            total = y;
        
        printf("%d\n", total);

    }
    
	return 0;
}



