// DATE: 15/07/2023, 08:47:04
// PROBLEM NAME: Qualify the round
// PROBLEM URL: https://www.codechef.com/problems/QUALIFY
// PROBLEM DIFFICULTY RATTING: 594
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &a, &b);

        if (x <= a+b*2)
            printf("Qualify\n");
        else
            printf("NotQualify\n");

    }
    
	return 0;
}



