// DATE: 07/02/2024, 05:10:23
// PROBLEM NAME: Chefland Visa
// PROBLEM URL: https://www.codechef.com/problems/VISA
// PROBLEM DIFFICULTY RATTING: 857
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, x1, x2, y1, y2, z1, z2;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d%d%d", &x1, &x2, &y1, &y2, &z1, &z2);
        
        if (x2 >= x1 && y2 >= y1 && z2 <= z1)
            printf("YES\n");
        else
            printf("NO\n");
        
    }

}



