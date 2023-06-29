// DATE: 29/06/2023, 04:52:23
// PROBLEM NAME: Shopping Change
// PROBLEM URL: https://www.codechef.com/problems/SHOPCHANGE
// PROBLEM DIFFICULTY RATTING: 526
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x;

    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        printf("%d\n", 100 - x);
    }
    
	return 0;
}



