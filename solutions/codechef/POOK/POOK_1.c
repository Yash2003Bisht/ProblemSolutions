// DATE: 05/12/2022, 06:49:13
// PROBLEM NAME: Game of Pooks
// PROBLEM URL: https://www.codechef.com/problems/POOK
// PROBLEM DIFFICULTY RATTING: 1121
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        if (n == 2 || n == 3) printf("%d\n", n-1);
        else printf("%d\n", n);
    }
    
	return 0;
}



