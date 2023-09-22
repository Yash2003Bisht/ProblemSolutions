// DATE: 22/09/2023, 08:57:59
// PROBLEM NAME: Watching Movies at 2x
// PROBLEM URL: https://www.codechef.com/problems/MOVIE2X
// PROBLEM DIFFICULTY RATTING: 628
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", y/2 + (x-y));
	return 0;
}



