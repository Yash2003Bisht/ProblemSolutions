// DATE: 28/12/2023, 09:26:07
// PROBLEM NAME: Painting Walls
// PROBLEM URL: https://www.codechef.com/problems/PAINTCHRIS
// PROBLEM DIFFICULTY RATTING: 567
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, x, y, z, area;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        area = x*y;
        z /= 2;
        printf("%d\n", z/area);
    }

}



