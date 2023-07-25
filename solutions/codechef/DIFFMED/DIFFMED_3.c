// DATE: 25/07/2023, 07:42:36
// PROBLEM NAME: Different Medians
// PROBLEM URL: https://www.codechef.com/problems/DIFFMED
// PROBLEM DIFFICULTY RATTING: 1408
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, temp1, temp2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        temp1 = n, temp2 = 1; 
        
        for (int i=0; i<n; i++){
            if (i%2 == 0){
                printf("%d ", temp1);
                temp1--;
            } else {
                printf("%d ", temp2);
                temp2++;
            }
        }
        
        printf("\n");

    }
    
	return 0;
}



