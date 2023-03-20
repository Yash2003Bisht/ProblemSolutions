// DATE: 20/03/2023, 07:45:17
// PROBLEM NAME: Beat the Average
// PROBLEM URL: https://www.codechef.com/problems/ABOVEAVG
// PROBLEM DIFFICULTY RATTING: 1278
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, m, x;
    long int n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%ld%d%d", &n, &m, &x);
        printf("%ld\n", m == x ? 0 : (n*x)/(x+1));
        
    }
    
	return 0;
}



