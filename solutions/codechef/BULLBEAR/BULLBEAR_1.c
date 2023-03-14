// DATE: 14/03/2023, 01:11:22
// PROBLEM NAME: Bull or Bear
// PROBLEM URL: https://www.codechef.com/problems/BULLBEAR
// PROBLEM DIFFICULTY RATTING: 300
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);

        if (x > y)
            printf("LOSS\n");
        else if (x == y)
            printf("NEUTRAL\n");
        else
            printf("PROFIT\n");
        
    }
    
	return 0;
}



