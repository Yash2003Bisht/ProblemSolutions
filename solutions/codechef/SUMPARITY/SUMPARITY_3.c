// DATE: 05/09/2023, 08:37:26
// PROBLEM NAME: Vedant and his Hidden Array
// PROBLEM URL: https://www.codechef.com/problems/SUMPARITY
// PROBLEM DIFFICULTY RATTING: 1448
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &a);
        
        if (n > 1 && ((n%2 != 0 && a%2 == 0) || (n%2 == 0 && a%2 == 0)))
            printf("Impossible\n");
        else if (n == 1){
            if (a%2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
        } else if (n%2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");

    }
    
	return 0;
}



