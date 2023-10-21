// DATE: 19/10/2023, 08:33:03
// PROBLEM NAME: Pizza Cutting
// PROBLEM URL: https://www.codechef.com/problems/PIZZAC
// PROBLEM DIFFICULTY RATTING: 566
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        if (n==1 || n%2 == 0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



