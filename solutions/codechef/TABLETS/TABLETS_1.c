// DATE: 16/04/2023, 10:39:04
// PROBLEM NAME: Multivitamin Tablets
// PROBLEM URL: https://www.codechef.com/problems/TABLETS
// PROBLEM DIFFICULTY RATTING: 376
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);

        if (y >= x*3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



