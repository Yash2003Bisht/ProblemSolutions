// DATE: 10/03/2023, 07:54:43
// PROBLEM NAME: Adjacent Sum Parity
// PROBLEM URL: https://www.codechef.com/problems/ADJSUMPAR
// PROBLEM DIFFICULTY RATTING: 1013
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, b, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &b);
            total += b;
        }
        
        if (total % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



