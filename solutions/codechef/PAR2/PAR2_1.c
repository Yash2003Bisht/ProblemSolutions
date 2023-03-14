// DATE: 14/03/2023, 01:08:49
// PROBLEM NAME: Parity
// PROBLEM URL: https://www.codechef.com/problems/PAR2
// PROBLEM DIFFICULTY RATTING: 295
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%2 == 0)
            printf("Yes\n");
        else
            printf("No\n");
        
    }
    
	return 0;
}



