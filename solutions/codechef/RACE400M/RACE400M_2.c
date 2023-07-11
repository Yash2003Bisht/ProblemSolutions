// DATE: 11/07/2023, 08:31:43
// PROBLEM NAME: 400M Race
// PROBLEM URL: https://www.codechef.com/problems/RACE400M
// PROBLEM DIFFICULTY RATTING: 548
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        if (400/x > 400/y && 400/x > 400/z)
            printf("ALICE\n");
        else if (400/y > 400/x && 400/y > 400/z)
            printf("BOB\n");
        else
            printf("CHARLIE\n");
    }
    
	return 0;
}



