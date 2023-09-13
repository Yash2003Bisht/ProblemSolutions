// DATE: 13/09/2023, 08:24:04
// PROBLEM NAME: Four Equidistant Points on a Grid
// PROBLEM URL: https://www.codechef.com/problems/DISTCON
// PROBLEM DIFFICULTY RATTING: 1460
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int d, dis, start;
    scanf("%d\n", &d);
    
    if (d%2 != 0)
        printf("-1\n");
    else {
        dis = d/2, start = d + 1;
        printf("%d %d\n", start, start + dis);
        printf("%d %d\n", start + dis, start);
        printf("%d %d\n", start, start - dis);
        printf("%d %d\n", start - dis, start);
    }
    
	return 0;
}



