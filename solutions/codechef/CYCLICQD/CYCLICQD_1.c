// DATE: 17/11/2023, 08:57:49
// PROBLEM NAME: Cyclic Quadrilateral
// PROBLEM URL: https://www.codechef.com/problems/CYCLICQD
// PROBLEM DIFFICULTY RATTING: 735
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, a, b, c, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a+c == 180 && b+d == 180)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



