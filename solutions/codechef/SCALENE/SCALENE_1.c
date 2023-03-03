// DATE: 03/03/2023, 08:33:33
// PROBLEM NAME: Scalene Triangle
// PROBLEM URL: https://www.codechef.com/problems/SCALENE
// PROBLEM DIFFICULTY RATTING: 430
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        
        if (a != b && b != c && c != a) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



