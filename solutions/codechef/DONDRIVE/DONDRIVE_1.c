// DATE: 24/06/2023, 08:52:42
// PROBLEM NAME: Donation Drive
// PROBLEM URL: https://www.codechef.com/problems/DONDRIVE
// PROBLEM DIFFICULTY RATTING: 272
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        printf("%d\n", n-x);
    }
    
	return 0;
}



