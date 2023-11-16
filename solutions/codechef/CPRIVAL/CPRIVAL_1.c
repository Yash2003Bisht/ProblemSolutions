// DATE: 16/11/2023, 08:36:00
// PROBLEM NAME: Rivalry
// PROBLEM URL: https://www.codechef.com/problems/CPRIVAL
// PROBLEM DIFFICULTY RATTING: 501
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int r1, r2, r3, r4;
    scanf("%d%d\n%d%d", &r1, &r2, &r3, &r4);

    if ((r1+r3) > (r2+r4))
        printf("Dominater");
    else
        printf("Everule");

	return 0;
}



