// DATE: 27/07/2023, 08:38:55
// PROBLEM NAME: Double Strings
// PROBLEM URL: https://www.codechef.com/problems/DOUBLE
// PROBLEM DIFFICULTY RATTING: 1134
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%2 == 0)
            printf("%d\n", n);
        else
            printf("%d\n", n-1);
        
    }
    
	return 0;
}



