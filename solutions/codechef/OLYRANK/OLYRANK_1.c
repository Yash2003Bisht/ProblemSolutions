// DATE: 19/02/2024, 08:48:45
// PROBLEM NAME: Olympics Ranking
// PROBLEM URL: https://www.codechef.com/problems/OLYRANK
// PROBLEM DIFFICULTY RATTING: 893
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, g1, g2, s1, s2, b1, b2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d%d", &g1, &s1, &b1, &g2, &s2, &b2);

        if (g1+s1+b1 > g2+s2+b2)
            printf("1\n");
        else
            printf("2\n");

    }
    
}



