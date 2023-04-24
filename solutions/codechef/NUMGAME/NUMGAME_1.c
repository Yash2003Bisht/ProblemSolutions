// DATE: 24/04/2023, 08:37:31
// PROBLEM NAME: Yet Another Number Game
// PROBLEM URL: https://www.codechef.com/problems/NUMGAME
// PROBLEM DIFFICULTY RATTING: -1
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    long long int t, n;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        
        if (n%2 == 0)
            printf("ALICE\n");
        else
            printf("BOB\n");
        
    }
    
	return 0;
}



