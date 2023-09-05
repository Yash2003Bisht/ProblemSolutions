// DATE: 05/09/2023, 08:40:13
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
        
        if (a%2 != 0){
            if (n%2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
        } else {
            if (n==1)
                printf("Even\n");
            else
                printf("Impossible\n");
        }
    }
    
	return 0;
}



