// DATE: 16/11/2023, 08:41:12
// PROBLEM NAME: Decrement OR Increment
// PROBLEM URL: https://www.codechef.com/problems/DECINC
// PROBLEM DIFFICULTY RATTING: 722
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    if (n%4 == 0)
        printf("%d", n+1);
    else
        printf("%d", n-1);
    
	return 0;
}



