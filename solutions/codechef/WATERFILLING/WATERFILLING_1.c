// DATE: 12/06/2023, 08:42:05
// PROBLEM NAME: Water Filling
// PROBLEM URL: https://www.codechef.com/problems/WATERFILLING
// PROBLEM DIFFICULTY RATTING: 541
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, b1, b2, b3;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &b1, &b2, &b3);
        
        if (b1 + b2 + b3 <= 1)
            printf("Water filling time\n");
        else
            printf("Not now\n");
        
    }
    
	return 0;
}



