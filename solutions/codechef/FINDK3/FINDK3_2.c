// DATE: 26/12/2023, 08:48:10
// PROBLEM NAME: FIND A and B
// PROBLEM URL: https://www.codechef.com/problems/FINDK3
// PROBLEM DIFFICULTY RATTING: 802
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &x, &y, &z);

        if ((x*y)%z == 0)
            printf("%d %d\n", (x*y), z);
        else if ((x*z)%y == 0)
            printf("%d %d\n", (x*z), y);
        else if ((y*z)%x == 0)
            printf("%d %d\n", (y*z), x);
        else
            printf("-1\n");

    }

}


