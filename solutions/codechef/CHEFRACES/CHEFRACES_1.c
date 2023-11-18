// DATE: 18/11/2023, 09:00:24
// PROBLEM NAME: Chef and Races
// PROBLEM URL: https://www.codechef.com/problems/CHEFRACES
// PROBLEM DIFFICULTY RATTING: 745
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, b, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &x, &y);
        if (a != x && b != y && a != y && b != x)
            printf("2\n");
        else if ((a == x && b == y) || (a == y && b == x))
            printf("0\n");
        else
            printf("1\n");
    }
    
	return 0;
}



