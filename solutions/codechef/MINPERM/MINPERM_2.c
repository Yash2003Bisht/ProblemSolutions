// DATE: 02/05/2023, 07:25:16
// PROBLEM NAME: Minimum Good Permutation
// PROBLEM URL: https://www.codechef.com/problems/MINPERM
// PROBLEM DIFFICULTY RATTING: 1315
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        count = n%2 == 0 ? n+1 : n;

        for (int i=1; i<count; i++){
            if (i == count-1 && n%2 != 0)
                printf("%d %d", n, i-1);
            else if (i%2 == 0)
                printf("%d ", i-1);
            else
                printf("%d ", i+1);
        }
        
        printf("\n");
        
    }
    
	return 0;
}



