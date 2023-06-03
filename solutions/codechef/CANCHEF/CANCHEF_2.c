// DATE: 03/06/2023, 09:14:48
// PROBLEM NAME: Can Chef 
// PROBLEM URL: https://www.codechef.com/problems/CANCHEF
// PROBLEM DIFFICULTY RATTING: 471
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (y*2 / 15 >= x)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    
	return 0;
}



