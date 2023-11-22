// DATE: 22/11/2023, 09:06:19
// PROBLEM NAME: Single-use Attack
// PROBLEM URL: https://www.codechef.com/problems/SINGLEUSE
// PROBLEM DIFFICULTY RATTING: 777
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, h, x, y, attacks;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &h, &x, &y);
        h -= y;

        if (h > 0){
            attacks = ceil((float) h/x) + 1;
            printf("%d\n", attacks);
        } else
            printf("1\n");

    }
    
	return 0;
}



