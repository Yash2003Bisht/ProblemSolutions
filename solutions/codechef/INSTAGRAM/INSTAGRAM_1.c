// DATE: 16/04/2023, 10:48:15
// PROBLEM NAME: Instagram
// PROBLEM URL: https://www.codechef.com/problems/INSTAGRAM
// PROBLEM DIFFICULTY RATTING: 408
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x > y*10)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



