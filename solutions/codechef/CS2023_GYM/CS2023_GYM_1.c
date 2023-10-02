// DATE: 02/10/2023, 01:12:55
// PROBLEM NAME: Gymkhana Election IIIT-A
// PROBLEM URL: https://www.codechef.com/problems/CS2023_GYM
// PROBLEM DIFFICULTY RATTING: 629
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        printf("%d\n", (m/2) + 1);
    }
    
	return 0;
}



