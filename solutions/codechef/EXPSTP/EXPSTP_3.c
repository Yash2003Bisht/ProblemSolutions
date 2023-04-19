// DATE: 19/04/2023, 08:50:57
// PROBLEM NAME: Expensive Steps 
// PROBLEM URL: https://www.codechef.com/problems/EXPSTP
// PROBLEM DIFFICULTY RATTING: 1310
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(a, b)(a>b?b:a)

int main(void) {
    int t, n, x1, y1, x2, y2, inside, outside;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d", &n, &x1, &y1, &x2, &y2);
        inside = 0, outside = 0;

        if (abs(x1-x2) > 1)
            inside--;

        inside = abs(x1-x2) + abs(y1-y2);
        outside = min(min(x1, (n-x1)+1), min(y1, (n-y1)+1)) + min(min(x2, (n-x2)+1), min(y2, (n-y2)+1));
        
        printf("%d\n", min(inside, outside));

    }
    
	return 0;
}



