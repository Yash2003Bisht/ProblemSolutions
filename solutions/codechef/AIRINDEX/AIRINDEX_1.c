// DATE: 15/09/2023, 09:18:20
// PROBLEM NAME: Air Quality Index
// PROBLEM URL: https://www.codechef.com/problems/AIRINDEX
// PROBLEM DIFFICULTY RATTING: 347
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int aqi;
    scanf("%d", &aqi);
    
    if (aqi < 100)
        printf("YES");
    else
        printf("NO");
    
	return 0;
}



