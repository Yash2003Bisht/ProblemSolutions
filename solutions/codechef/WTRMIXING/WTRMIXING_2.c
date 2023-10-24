// DATE: 24/10/2023, 02:18:06
// PROBLEM NAME: Water Mixing
// PROBLEM URL: https://www.codechef.com/problems/WTRMIXING
// PROBLEM DIFFICULTY RATTING: 694
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int t, x, y, a, b, req_temp;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d", &a, &b, &x, &y);
        req_temp = a - b;

        if (req_temp == 0 || (req_temp > 0 && req_temp <= y) || (req_temp < 0 && abs(req_temp) <= x))
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}




