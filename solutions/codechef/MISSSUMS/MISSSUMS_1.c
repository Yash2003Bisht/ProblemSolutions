// DATE: 21/06/2023, 07:49:18
// PROBLEM NAME: Missing Sums
// PROBLEM URL: https://www.codechef.com/problems/MISSSUMS
// PROBLEM DIFFICULTY RATTING: 1374
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        for (int i=1; i<n+n; i+=2)
            printf("%d ", i);

        printf("\n");
        
    }
	
	return 0;
}



