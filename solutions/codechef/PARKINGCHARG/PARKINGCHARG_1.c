// DATE: 26/05/2023, 08:44:06
// PROBLEM NAME: Parking Charges
// PROBLEM URL: https://www.codechef.com/problems/PARKINGCHARG
// PROBLEM DIFFICULTY RATTING: 416
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int x, h, y;
    scanf("%d%d%d", &x, &y, &h);
    printf("%d", (y*(h-1))+x);
	return 0;
}



