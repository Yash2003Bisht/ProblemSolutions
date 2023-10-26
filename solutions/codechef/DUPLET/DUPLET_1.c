// DATE: 26/10/2023, 08:00:42
// PROBLEM NAME: Dull Operation
// PROBLEM URL: https://www.codechef.com/problems/DUPLET
// PROBLEM DIFFICULTY RATTING: 1490
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        printf("%d %d\n", n, n-1);
    }
    
	return 0;
}



