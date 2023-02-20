// DATE: 22/11/2022, 06:49:03
// PROBLEM NAME: Weird Modulo Problem 
// PROBLEM URL: https://www.codechef.com/problems/EXUNA
// PROBLEM DIFFICULTY RATTING: 1104
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.2M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t,n,min_a,a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min_a = INT_MAX;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (min_a>a) min_a = a;
        }
        
        printf("%d\n", min_a);
        
    }
    
	return 0;
}



