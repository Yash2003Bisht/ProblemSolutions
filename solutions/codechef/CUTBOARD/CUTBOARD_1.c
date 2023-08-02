// DATE: 02/08/2023, 08:11:54
// PROBLEM NAME: Cut the Board
// PROBLEM URL: https://www.codechef.com/problems/CUTBOARD
// PROBLEM DIFFICULTY RATTING: 1081
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        printf("%d\n", (n-1)*(m-1));
    }
    
	return 0;
}



