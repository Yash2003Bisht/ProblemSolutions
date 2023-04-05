// DATE: 05/04/2023, 07:12:09
// PROBLEM NAME: Monopoly in Chefland
// PROBLEM URL: https://www.codechef.com/problems/MONOPOLY
// PROBLEM DIFFICULTY RATTING: 482
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, r1, r2, r3;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &r1, &r2, &r3);
        
        if (r1 > r2+r3 || r2 > r1+r3 || r3 > r1 + r2)
            printf("Yes\n");
        else
            printf("No\n");
        
    }
    
	return 0;
}



