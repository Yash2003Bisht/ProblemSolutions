// QUESTION URL: https://www.codechef.com/problems/PROINC
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y, new_profit;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        new_profit = x*0.1 + y;
        printf("%d\n", new_profit);
    }
    
	return 0;
}



