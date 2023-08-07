// DATE: 05/08/2023, 08:28:19
// PROBLEM NAME: Chef and NextGen
// PROBLEM URL: https://www.codechef.com/problems/HELIUM3
// PROBLEM DIFFICULTY RATTING: 562
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, b, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &x, &y);
        
        if (x*y >= a*b)
            printf("Yes\n");
        else
            printf("No\n");
        
    }
    
	return 0;
}



