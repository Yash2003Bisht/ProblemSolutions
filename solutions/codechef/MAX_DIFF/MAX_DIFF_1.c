// DATE: 14/02/2023, 07:10:39
// PROBLEM NAME: The Two Dishes
// PROBLEM URL: https://www.codechef.com/problems/MAX_DIFF
// PROBLEM DIFFICULTY RATTING: 1254
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, s;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &s);
        
        if (n >= s) printf("%d\n", s);
        else printf("%d\n", 2*n - s);
        
    }
    
	return 0;
}



