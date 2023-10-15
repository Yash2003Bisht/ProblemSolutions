// DATE: 12/10/2023, 08:58:26
// PROBLEM NAME: Sunday Brunch
// PROBLEM URL: https://www.codechef.com/problems/BRUNCH
// PROBLEM DIFFICULTY RATTING: 648
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, x, y, hungry_neighbours;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &x, &y);
        hungry_neighbours = x/y;

        if (hungry_neighbours < 20)
            printf("%d\n", hungry_neighbours);
        else
            printf("20\n");

    }

	return 0;
}


