// DATE: 11/07/2023, 07:31:48
// PROBLEM NAME: Make it Divisible
// PROBLEM URL: https://www.codechef.com/problems/MAKEDIV3
// PROBLEM DIFFICULTY RATTING: 1379
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n == 1)
            printf("3\n");
        else {
            printf("1");
            for (int i=0; i<n-2; i++){
                printf("0");
            }
            printf("5\n");
        }
        
        
    }
    
	return 0;
}



