// DATE: 28/10/2023, 09:08:07
// PROBLEM NAME: Minimum number of coins
// PROBLEM URL: https://www.codechef.com/problems/MINCOINS
// PROBLEM DIFFICULTY RATTING: 711
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, x; 
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);

        if (x%10 == 0)
            printf("%d\n", x/10);
        else if (x%5 == 0)
            printf("%d\n", x/10 + (x%10)/5);
        else
            printf("-1\n");

    }
    
	return 0;
}



