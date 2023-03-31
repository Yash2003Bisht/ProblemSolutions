// DATE: 31/03/2023, 09:20:25
// PROBLEM NAME: Candy Division
// PROBLEM URL: https://www.codechef.com/problems/CANDIVIDE
// PROBLEM DIFFICULTY RATTING: 289
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n%3 == 0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



