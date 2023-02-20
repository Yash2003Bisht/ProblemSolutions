// DATE: 26/10/2022, 07:57:10
// PROBLEM NAME: Odd Sum Pair
// PROBLEM URL: https://www.codechef.com/problems/ODDSUMPAIR
// PROBLEM DIFFICULTY RATTING: 506
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, c, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        x = a+b;
        y = a+c;
        z = b+c;
        
        if (x%2!=0 || y%2!=0 || z%2!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



