// DATE: 09/06/2023, 08:18:07
// PROBLEM NAME: Codechef Airlines
// PROBLEM URL: https://www.codechef.com/problems/AIRLINES
// PROBLEM DIFFICULTY RATTING: 475
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        
        if (x*10 >= y)
            printf("%d\n", y*z);
        else
            printf("%d\n", x*10*z);
        
    }
    
	return 0;
}



