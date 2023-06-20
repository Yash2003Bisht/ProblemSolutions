// DATE: 19/06/2023, 08:14:11
// PROBLEM NAME: Mean and Median
// PROBLEM URL: https://www.codechef.com/problems/MEANMEDIAN
// PROBLEM DIFFICULTY RATTING: 1371
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>
#include <math.h>


int main(void) {
    int t, x, y, num;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        num = 3*x - 2*y;
        printf("%d %d %d\n", 3*x - y - num, y, num);
        
    }

	return 0;
}



