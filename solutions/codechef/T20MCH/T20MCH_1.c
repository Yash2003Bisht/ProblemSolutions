// DATE: 14/07/2023, 07:36:00
// PROBLEM NAME: Possible Victory
// PROBLEM URL: https://www.codechef.com/problems/T20MCH
// PROBLEM DIFFICULTY RATTING: 769
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int r, o, c;
    scanf("%d%d%d", &r, &o, &c);
    
    if (r < c + (20-o)*36)
        printf("YES\n");
    else
        printf("NO\n");
    
	return 0;
}



