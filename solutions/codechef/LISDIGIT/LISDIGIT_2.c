// DATE: 11/04/2023, 07:40:23
// PROBLEM NAME: Digit Longest Increasing Subsequences 2
// PROBLEM URL: https://www.codechef.com/problems/LISDIGIT
// PROBLEM DIFFICULTY RATTING: 1297
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            printf("%d", a);
        }

        printf("\n");

    }
    
	return 0;
}



