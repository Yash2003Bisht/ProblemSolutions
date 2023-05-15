// DATE: 15/05/2023, 08:49:59
// PROBLEM NAME: Better Deal
// PROBLEM URL: https://www.codechef.com/problems/BETDEAL
// PROBLEM DIFFICULTY RATTING: 584
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        int shop1 = abs(100*a/100)-100, shop2 = abs(200*b/100)-200;

        if (shop1 > shop2)
            printf("FIRST\n");
        else if (shop1 < shop2)
            printf("SECOND\n");
        else
            printf("BOTH\n");
    }
    
	return 0;
}



