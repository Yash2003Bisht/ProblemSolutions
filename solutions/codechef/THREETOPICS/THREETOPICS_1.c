// DATE: 15/08/2023, 01:55:38
// PROBLEM NAME: The Three Topics
// PROBLEM URL: https://www.codechef.com/problems/THREETOPICS
// PROBLEM DIFFICULTY RATTING: 573
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int a, b, c, x;
    scanf("%d%d%d%d", &a, &b, &c, &x);
    
    if (a == x || b == x || c == x)
        printf("Yes\n");
    else
        printf("No\n");
    
	return 0;
}



