// DATE: 05/09/2023, 08:41:15
// PROBLEM NAME: Vedant and his Hidden Array
// PROBLEM URL: https://www.codechef.com/problems/SUMPARITY
// PROBLEM DIFFICULTY RATTING: 1448
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &a);

        if (a%2 != 0){
            if (n%2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        } else {
            if (n==1)
                printf("even\n");
            else
                printf("impossible\n");
        }
    }
    
	return 0;
}



