// DATE: 05/06/2023, 07:51:01
// PROBLEM NAME: Not Divisible
// PROBLEM URL: https://www.codechef.com/problems/NOTDIVISIBLE
// PROBLEM DIFFICULTY RATTING: 1363
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        for (int i=0; i<n; i++){
            if (i%2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
        
    }
    
	return 0;
}



