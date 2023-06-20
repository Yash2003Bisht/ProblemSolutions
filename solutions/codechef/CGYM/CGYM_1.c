// DATE: 19/06/2023, 08:17:27
// PROBLEM NAME: Chef and Gym
// PROBLEM URL: https://www.codechef.com/problems/CGYM
// PROBLEM DIFFICULTY RATTING: 496
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d %d", &x, &y, &z);
        if (x + y <= z)
            printf("2\n");
        else if (x <= z)
            printf("1\n");
        else
            printf("0\n");
    }
    
	return 0;
}



