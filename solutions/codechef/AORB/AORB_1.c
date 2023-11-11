// DATE: 11/11/2023, 09:09:36
// PROBLEM NAME: A or B
// PROBLEM URL: https://www.codechef.com/problems/AORB
// PROBLEM DIFFICULTY RATTING: 728
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", max((500 - (y+x)*2) + (1000 - y*4), (500 - x*2) + (1000 - (y+x)*4)));
    }
    
	return 0;
}



