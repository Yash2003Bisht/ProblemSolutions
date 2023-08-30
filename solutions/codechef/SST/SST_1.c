// DATE: 30/08/2023, 02:03:53
// PROBLEM NAME: Sasta Shark Tank
// PROBLEM URL: https://www.codechef.com/problems/SST
// PROBLEM DIFFICULTY RATTING: 592
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, a, b, val1, val2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        val1 = a*10, val2 = b*5;

        if (val1 == val2)
            printf("ANY\n");
        else if (val1 > val2)
            printf("FIRST\n");
        else
            printf("SECOND\n");
        
    }
    
	return 0;
}



