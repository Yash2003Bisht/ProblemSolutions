// DATE: 17/07/2023, 09:04:48
// PROBLEM NAME: CRED Coins
// PROBLEM URL: https://www.codechef.com/problems/CREDCOINS
// PROBLEM DIFFICULTY RATTING: 539
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", (x*y)/100);
    }
    
	return 0;
}



