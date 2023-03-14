// DATE: 14/03/2023, 07:20:52
// PROBLEM NAME: Chef and The Right Triangles
// PROBLEM URL: https://www.codechef.com/problems/RIGHTRI
// PROBLEM DIFFICULTY RATTING: 1275
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>
#include <math.h>

int main(void) {
    int n, x1, y1, x2, y2, x3, y3, a, b, c, count = 0;
    scanf("%d", &n);
    
    while(n--){
        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
        a = pow(x1 - x2, 2) + pow(y1 - y2, 2);
        b = pow(x2 - x3, 2) + pow(y2 - y3, 2);
        c = pow(x3 - x1, 2) + pow(y3 - y1, 2);
        
        if (a+b == c || b+c == a || c+a == b)
            count++;

    }
    
    printf("%d", count);
    
	return 0;
}



