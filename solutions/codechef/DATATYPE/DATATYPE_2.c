// DATE: 01/04/2023, 09:25:55
// PROBLEM NAME: Fit in Data Type
// PROBLEM URL: https://www.codechef.com/problems/DATATYPE
// PROBLEM DIFFICULTY RATTING: 1133
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        if (n >= x)
            printf("%d\n", x);
        else
            printf("%d\n", x-n-1);
        
    }
    
	return 0;
}



