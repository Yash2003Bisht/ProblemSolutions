// DATE: 01/06/2023, 09:00:58
// PROBLEM NAME: Oneful Pairs
// PROBLEM URL: https://www.codechef.com/problems/ONEFULPAIRS
// PROBLEM DIFFICULTY RATTING: 374
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int a , b;
    scanf("%d%d", &a, &b);
    
    if (a+b+(a*b) == 111)
        printf("Yes\n");
    else
        printf("No\n");
    
	return 0;
}



