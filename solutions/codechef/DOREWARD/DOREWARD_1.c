// DATE: 24/06/2023, 08:52:48
// PROBLEM NAME: Donation Rewards
// PROBLEM URL: https://www.codechef.com/problems/DOREWARD
// PROBLEM DIFFICULTY RATTING: 395
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n <= 3)
            printf("BRONZE\n");
        else if (n <= 6)
            printf("SILVER\n");
        else
            printf("GOLD\n");
        
    }
    
	return 0;
}



