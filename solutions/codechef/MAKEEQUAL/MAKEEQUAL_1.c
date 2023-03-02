// DATE: 02/03/2023, 02:21:29
// PROBLEM NAME: Make them equal
// PROBLEM URL: https://www.codechef.com/problems/MAKEEQUAL
// PROBLEM DIFFICULTY RATTING: 1267
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#include <limits.h>
#define min(a, b)(a>b ? b:a)
#define max(a, b)(a>b ? a:b)

int main(void) {
    int t, n, a, min_value, max_value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min_value = INT_MAX, max_value = INT_MIN;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            max_value = max(a, max_value);
            min_value = min(a, min_value);
        }

        printf("%d\n", max_value - min_value);
        
    }
    
	return 0;
}



