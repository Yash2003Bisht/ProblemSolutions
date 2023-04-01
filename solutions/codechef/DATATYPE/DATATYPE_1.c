// DATE: 01/04/2023, 09:27:43
// PROBLEM NAME: Fit in Data Type
// PROBLEM URL: https://www.codechef.com/problems/DATATYPE
// PROBLEM DIFFICULTY RATTING: 1133
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        printf("%d\n", x%(n+1));
        
    }
    
	return 0;
}



