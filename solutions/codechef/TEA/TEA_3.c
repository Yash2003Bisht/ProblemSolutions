// DATE: 30/08/2023, 01:46:30
// PROBLEM NAME: Chef Drinks Tea
// PROBLEM URL: https://www.codechef.com/problems/TEA
// PROBLEM DIFFICULTY RATTING: 591
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        
        if (y > x)
            printf("%d\n", z);
        else
            printf("%d\n", (x/y + x%y)*z);
        
    }
    
	return 0;
}



