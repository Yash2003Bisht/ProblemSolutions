// DATE: 09/10/2023, 09:57:07
// PROBLEM NAME: Mario and Bullet
// PROBLEM URL: https://www.codechef.com/problems/BULLET
// PROBLEM DIFFICULTY RATTING: 650
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    // dust
    // distance = speed * time
    // time = distance / speed

    int t, x, y, z, total_time;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &x, &y, &z);

        total_time = y / x;
        printf("%d\n", max(0, z - total_time));
    }

	return 0;
}



