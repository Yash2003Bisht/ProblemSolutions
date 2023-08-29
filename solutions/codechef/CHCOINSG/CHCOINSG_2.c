// DATE: 29/08/2023, 07:33:14
// PROBLEM NAME: Chef and Coins Game
// PROBLEM URL: https://www.codechef.com/problems/CHCOINSG
// PROBLEM DIFFICULTY RATTING: 1442
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        if (n%6 == 0)
            printf("Misha\n");
        else
            printf("Chef\n");

    }
    
	return 0;
}



