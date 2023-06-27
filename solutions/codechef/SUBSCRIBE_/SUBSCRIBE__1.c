// DATE: 27/06/2023, 07:39:59
// PROBLEM NAME: Subscriptions
// PROBLEM URL: https://www.codechef.com/problems/SUBSCRIBE_
// PROBLEM DIFFICULTY RATTING: 504
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &n, &x);

        if (n%6 == 0)
            printf("%d\n", (n/6)*x);
        else
            printf("%d\n", (n/6 + 1)*x);

    }
    
	return 0;
}



