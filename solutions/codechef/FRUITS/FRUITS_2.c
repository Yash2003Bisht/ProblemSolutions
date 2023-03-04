// DATE: 04/03/2023, 08:29:46
// PROBLEM NAME: Chef and Fruits
// PROBLEM URL: https://www.codechef.com/problems/FRUITS
// PROBLEM DIFFICULTY RATTING: 1126
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>
#define min(a, b)(a>b?b:a)

int main(void) {
    int t, n, m, k, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        diff = abs(n-m);
        
        if (diff <= k)
            printf("0\n");
        else
            printf("%d\n", diff - k);
        
    }
    
	return 0;
}



