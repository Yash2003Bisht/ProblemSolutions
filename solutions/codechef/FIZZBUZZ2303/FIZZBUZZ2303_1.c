// DATE: 10/11/2023, 09:25:19
// PROBLEM NAME: Chef Fantasy 11
// PROBLEM URL: https://www.codechef.com/problems/FIZZBUZZ2303
// PROBLEM DIFFICULTY RATTING: 739
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        printf("%d\n", n*(n-1));
    }

	return 0;
}



