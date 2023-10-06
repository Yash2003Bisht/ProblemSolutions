// DATE: 06/10/2023, 08:03:48
// PROBLEM NAME: Reach The Point
// PROBLEM URL: https://www.codechef.com/problems/RETPO
// PROBLEM DIFFICULTY RATTING: 1495
// STATUS: accepted
// TIME: 0.03
// MEMORY: 1.7M

#include <stdio.h>
#include <math.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, x, y;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &x, &y);
        x = abs(x), y = abs(y);
        printf("%d\n", 2*min(x, y) + 2*abs(x-y) + ((x-y)%2));
    }

	return 0;
}



