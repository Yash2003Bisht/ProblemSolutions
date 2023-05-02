// DATE: 02/05/2023, 08:29:04
// PROBLEM NAME: Permutation And Median
// PROBLEM URL: https://www.codechef.com/problems/PER_MED
// PROBLEM DIFFICULTY RATTING: 1318
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count1 = n, count2 = 1;

        if (n%2 == 0){
            while(count2 <= n/2)
                printf("%d %d ", count1--, count2++);
        } else {
            while(count2 <= n/2)
                printf("%d %d ", count1--, count2++);
            printf("%d ", count1);
        }
        
        printf("\n");

    }
    
	return 0;
}



