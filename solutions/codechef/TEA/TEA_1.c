// DATE: 30/08/2023, 01:57:50
// PROBLEM NAME: Chef Drinks Tea
// PROBLEM URL: https://www.codechef.com/problems/TEA
// PROBLEM DIFFICULTY RATTING: 591
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        
        if (y >= x)
            printf("%d\n", z);
        else{
            if (x%y == 0)
                printf("%d\n", (x/y)*z);
            else
                printf("%d\n", ((x/y)+1)*z);
        }
        
    }
    
	return 0;
}



