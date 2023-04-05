// DATE: 05/04/2023, 07:09:37
// PROBLEM NAME: Bucket and Water Flow 
// PROBLEM URL: https://www.codechef.com/problems/WATERFLOW
// PROBLEM DIFFICULTY RATTING: 483
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, w, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &w, &x, &y, &z);
        int temp = y*z + w;

        if (temp > x)
            printf("overflow\n");
        else if (temp == x)
            printf("filled\n");
        else
            printf("Unfilled\n");
        
    }
    
	return 0;
}



