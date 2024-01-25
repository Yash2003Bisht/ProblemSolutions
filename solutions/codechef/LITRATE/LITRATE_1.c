// DATE: 25/01/2024, 02:30:52
// PROBLEM NAME: Literacy Rate
// PROBLEM URL: https://www.codechef.com/problems/LITRATE
// PROBLEM DIFFICULTY RATTING: 512
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, l, p;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &p, &l);

        float literacy_rate = (float) l/p * 100;

        if (literacy_rate >= 75)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
}



