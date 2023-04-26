// DATE: 26/04/2023, 08:03:30
// PROBLEM NAME: Problem Difficulties
// PROBLEM URL: https://www.codechef.com/problems/PROBDIFF
// PROBLEM DIFFICULTY RATTING: 1321
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, a1, a2, a3, a4;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a1, &a2, &a3, &a4);
        
        if (a1 == a2 && a1 == a3 && a1 == a4)
            printf("0\n");
        else if ((a1 == a2 && a2 == a3) || (a2 == a3 && a3 == a4) || (a3 == a4 && a4 == a1) || (a4 == a1 && a1 == a2))
            printf("1\n");
        else
            printf("2\n");

    }
    
	return 0;
}

