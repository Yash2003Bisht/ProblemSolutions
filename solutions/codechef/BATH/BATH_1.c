// DATE: 05/10/2023, 08:23:28
// PROBLEM NAME: Bath in Winters
// PROBLEM URL: https://www.codechef.com/problems/BATH
// PROBLEM DIFFICULTY RATTING: 643
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", x/(y*2));
    }
    
	return 0;
}



