// DATE: 26/04/2023, 07:20:05
// PROBLEM NAME: Arranging Cup-cakes
// PROBLEM URL: https://www.codechef.com/problems/RESQ
// PROBLEM DIFFICULTY RATTING: 1322
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.2M

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, ans, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        ans = n - 1;

        for (int i=2; i<n; i++){
            if (n%i == 0){
                temp = abs((n/i)-i);
                ans = min(ans, temp);
            }
        }
        
        printf("%d\n", ans);

    }
    
	return 0;
}



