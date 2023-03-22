// DATE: 22/03/2023, 08:08:19
// PROBLEM NAME: Chef and Pal
// PROBLEM URL: https://www.codechef.com/problems/ANTIPAL
// PROBLEM DIFFICULTY RATTING: 1282
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%2 != 0)
            printf("-1\n");
        else {
            for (int i=0; i<n/2; i++)
                printf("10");

            printf("\n");

        }
        
    }
    
	return 0;
}



