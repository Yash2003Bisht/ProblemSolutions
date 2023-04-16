// DATE: 16/04/2023, 10:41:24
// PROBLEM NAME: Spice Level
// PROBLEM URL: https://www.codechef.com/problems/KITCHENSPICE
// PROBLEM DIFFICULTY RATTING: 390
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x < 4)
            printf("MILD\n");
        else if (x < 7)
            printf("MEDIUM\n");
        else
            printf("HOT\n");
        
    }
    
	return 0;
}



