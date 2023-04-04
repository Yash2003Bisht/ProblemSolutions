// DATE: 04/04/2023, 07:10:52
// PROBLEM NAME: Chef Chick
// PROBLEM URL: https://www.codechef.com/problems/CHFCHK
// PROBLEM DIFFICULTY RATTING: 1295
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t, n, a, min_value;
    scanf("%d", &t);
    
    while(t--){
        min_value = INT_MAX;
        scanf("%d", &n);
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (min_value > a)
                min_value = a;
        }
        
        printf("%d\n", min_value);
        
    }
    
	return 0;
}



