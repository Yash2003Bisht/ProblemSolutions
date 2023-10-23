// DATE: 23/10/2023, 09:23:02
// PROBLEM NAME: Valentine is Coming
// PROBLEM URL: https://www.codechef.com/problems/VALENTINE
// PROBLEM DIFFICULTY RATTING: 691
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", x/y);
    }

	return 0;
}



