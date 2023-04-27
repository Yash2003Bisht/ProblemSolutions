// DATE: 27/04/2023, 07:32:06
// PROBLEM NAME: Strike or Spare
// PROBLEM URL: https://www.codechef.com/problems/PINS
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        printf("1 1");
        
        n = n/2;
        for (int i=0; i<n; i++)
            printf("0");
        
        printf("\n");

    }
    
	return 0;
}


