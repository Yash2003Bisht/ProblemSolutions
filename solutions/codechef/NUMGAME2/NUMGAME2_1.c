// DATE: 24/04/2023, 08:38:57
// PROBLEM NAME: Number Game Revisited
// PROBLEM URL: https://www.codechef.com/problems/NUMGAME2
// PROBLEM DIFFICULTY RATTING: 1316
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    long long int t, n, i;
    
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        
        if (n%4 == 1)
            printf("ALICE\n");
        else
            printf("BOB\n");

    }
    
	return 0;
}



