// DATE: 03/06/2023, 09:16:25
// PROBLEM NAME: Can Chef 
// PROBLEM URL: https://www.codechef.com/problems/CANCHEF
// PROBLEM DIFFICULTY RATTING: 471
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x*15 >= y*2)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



