// DATE: 13/10/2023, 09:34:36
// PROBLEM NAME: Candy Distribution
// PROBLEM URL: https://www.codechef.com/problems/CANDYDIST
// PROBLEM DIFFICULTY RATTING: 668
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        
        if (n%m == 0 && (n/m)%2 == 0)
            printf("Yes\n");
        else
            printf("No\n");

    }
    
	return 0;
}



