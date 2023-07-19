// DATE: 19/07/2023, 08:47:35
// PROBLEM NAME: Integers that sum to the same value
// PROBLEM URL: https://www.codechef.com/problems/SUMNEQ
// PROBLEM DIFFICULTY RATTING: 592
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int n, count;
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
            if (i+j == n)
                count++;
    }
    
    printf("%d\n", count);
    
	return 0;
}



