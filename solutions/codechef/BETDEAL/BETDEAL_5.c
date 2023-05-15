// DATE: 15/05/2023, 08:46:33
// PROBLEM NAME: Better Deal
// PROBLEM URL: https://www.codechef.com/problems/BETDEAL
// PROBLEM DIFFICULTY RATTING: 584
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        int shop1 = 100-((float)100*((float)a/100)), shop2 = 200-((float)200*((float)b/100));

        if (shop1 > shop2)
            printf("SECOND\n");
        else if (shop1 < shop2)
            printf("FIRST\n");
        else
            printf("BOTH\n");
    }
    
	return 0;
}



