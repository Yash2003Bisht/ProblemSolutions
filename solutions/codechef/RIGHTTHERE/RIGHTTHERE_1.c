// DATE: 08/06/2023, 09:00:46
// PROBLEM NAME: Right There
// PROBLEM URL: https://www.codechef.com/problems/RIGHTTHERE
// PROBLEM DIFFICULTY RATTING: 299
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        if (x >= n)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



