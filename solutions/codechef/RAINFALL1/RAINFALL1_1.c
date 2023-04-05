// DATE: 05/04/2023, 07:15:00
// PROBLEM NAME: Rain in Chefland
// PROBLEM URL: https://www.codechef.com/problems/RAINFALL1
// PROBLEM DIFFICULTY RATTING: 328
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &x);
        if (x < 3)
            printf("LIGHT\n");
        else if (x >= 3 && x < 7)
            printf("MODERATE\n");
        else
            printf("HEAVY\n");
    }
    
	return 0;
}



