// DATE: 14/11/2023, 08:18:43
// PROBLEM NAME: Valid Triangles
// PROBLEM URL: https://www.codechef.com/problems/FLOW013
// PROBLEM DIFFICULTY RATTING: 750
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        if ((a+b+c) == 180)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



