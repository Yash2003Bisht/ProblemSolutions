// DATE: 07/09/2023, 09:03:35
// PROBLEM NAME: Control the Pollution
// PROBLEM URL: https://www.codechef.com/problems/SMOKE
// PROBLEM DIFFICULTY RATTING: 1450
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#include <math.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, x, y, buses, cars, both;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &y);
        buses = ceil((float) n/100) * x;
        cars = ceil((float) n/4) * y;
        both = ((n/100) * x) + ceil((float) (n%100) / 4) * y;
        printf("%d\n", min(both, min(cars, buses)));
    }
    
	return 0;
}



