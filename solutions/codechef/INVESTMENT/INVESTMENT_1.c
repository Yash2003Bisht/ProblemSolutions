// DATE: 10/04/2023, 09:20:55
// PROBLEM NAME: Good Investment or Not
// PROBLEM URL: https://www.codechef.com/problems/INVESTMENT
// PROBLEM DIFFICULTY RATTING: 357
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x >= y*2)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



