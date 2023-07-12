// DATE: 12/07/2023, 06:57:47
// PROBLEM NAME: Eidi Gift
// PROBLEM URL: https://www.codechef.com/problems/EID2
// PROBLEM DIFFICULTY RATTING: 1378
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>


int main(void) {
    int t, a1, a2, a3, c1, c2, c3;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &c1, &c2, &c3);
        if (
            ((a1 < a2 && c1 >= c2) || (a1 < a3 && c1 >= c3)) ||
            ((a2 < a1 && c2 >= c1) || (a2 < a3 && c2 >= c3)) ||
            ((a3 < a1 && c3 >= c1) || (a3 < a2 && c3 >= c2)) ||
            ((a1 == a2 && c1 != c2) || (a2 == a3 && c2 != c3) || (a1 == a3 && c1 != c3))
        )
            printf("NOT FAIR\n");
        
        else
            printf("FAIR\n");

    }
    
	return 0;
}



