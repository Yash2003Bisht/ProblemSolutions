// DATE: 20/03/2023, 07:46:23
// PROBLEM NAME: Beat the Average
// PROBLEM URL: https://www.codechef.com/problems/ABOVEAVG
// PROBLEM DIFFICULTY RATTING: 1278
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, m, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &x);
        printf("%d\n", m == x ? 0 : (n*x)/(x+1));
    }
    
	return 0;
}



