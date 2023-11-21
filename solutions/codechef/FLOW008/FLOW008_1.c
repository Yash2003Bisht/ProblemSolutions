// DATE: 21/11/2023, 09:10:09
// PROBLEM NAME: Helping Chef
// PROBLEM URL: https://www.codechef.com/problems/FLOW008
// PROBLEM DIFFICULTY RATTING: 776
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        if (n < 10)
            printf("Thanks for helping Chef!\n");
        else
            printf("-1\n");
    }
    
	return 0;
}



