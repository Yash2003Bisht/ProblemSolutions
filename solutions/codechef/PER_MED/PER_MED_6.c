// DATE: 02/05/2023, 08:14:45
// PROBLEM NAME: Permutation And Median
// PROBLEM URL: https://www.codechef.com/problems/PER_MED
// PROBLEM DIFFICULTY RATTING: 1318
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        count1 = 1, count2 = n-1;
        printf("%d ", n);

        for (int i=1; i<n; i++){
            if (i%2 != 0){
                printf("%d ", count1);
                count1++;
            }else{
                printf("%d ", count2);
                count2--;
            }
        }

        printf("\n");

    }
    
	return 0;
}



