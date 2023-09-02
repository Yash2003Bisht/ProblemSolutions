// DATE: 01/09/2023, 08:55:09
// PROBLEM NAME: Minimum Cars required
// PROBLEM URL: https://www.codechef.com/problems/MINCARS
// PROBLEM DIFFICULTY RATTING: 608
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%4 == 0)
            printf("%d\n", n/4);
        else
            printf("%d\n", n/4 + 1);
    }
    
	return 0;
}



