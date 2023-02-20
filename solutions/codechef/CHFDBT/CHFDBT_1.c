// DATE: 06/12/2022, 07:36:24
// PROBLEM NAME: Akash and Function
// PROBLEM URL: https://www.codechef.com/problems/CHFDBT
// PROBLEM DIFFICULTY RATTING: 1121
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>  

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = ceil((double)n/2);
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



