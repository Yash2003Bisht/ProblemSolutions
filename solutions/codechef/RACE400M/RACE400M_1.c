// DATE: 11/07/2023, 08:34:06
// PROBLEM NAME: 400M Race
// PROBLEM URL: https://www.codechef.com/problems/RACE400M
// PROBLEM DIFFICULTY RATTING: 548
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        if (x < y && x < z)
            printf("ALICE\n");
        else if (y < x && y < z)
            printf("BOB\n");
        else
            printf("CHARLIE\n");
    }

	return 0;
}



