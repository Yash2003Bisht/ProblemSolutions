// DATE: 10/04/2023, 09:15:45
// PROBLEM NAME: Chef and Donation
// PROBLEM URL: https://www.codechef.com/problems/DNATION
// PROBLEM DIFFICULTY RATTING: 305
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, y, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", y-x);
    }
    
	return 0;
}



