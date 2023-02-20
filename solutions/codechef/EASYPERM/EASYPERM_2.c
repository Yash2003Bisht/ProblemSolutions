// DATE: 02/11/2022, 06:40:17
// PROBLEM NAME: Easy Permutation
// PROBLEM URL: https://www.codechef.com/problems/EASYPERM
// PROBLEM DIFFICULTY RATTING: 1057
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        for (int i=n; i > 0; i--)
            printf("%d ", i);
        
        printf("\n");
    }
    
	return 0;
}



