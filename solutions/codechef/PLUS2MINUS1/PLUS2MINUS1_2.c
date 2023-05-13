// DATE: 13/05/2023, 07:24:00
// PROBLEM NAME: Plus 2 or Minus 1
// PROBLEM URL: https://www.codechef.com/problems/PLUS2MINUS1
// PROBLEM DIFFICULTY RATTING: 1098
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &y);
        
        if (y == 0)
            printf("1\n");
        else
            printf("%lld\n", y*3);
    }
    
	return 0;
}



