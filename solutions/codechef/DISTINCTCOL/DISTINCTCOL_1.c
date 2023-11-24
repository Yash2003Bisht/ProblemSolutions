// DATE: 23/11/2023, 09:32:04
// PROBLEM NAME: Distinct Colors
// PROBLEM URL: https://www.codechef.com/problems/DISTINCTCOL
// PROBLEM DIFFICULTY RATTING: 760
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, n, a, max_boxes;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        max_boxes = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (a > max_boxes)
                max_boxes = a;

        }

        printf("%d\n", max_boxes);
        
    }
    
	return 0;
}



