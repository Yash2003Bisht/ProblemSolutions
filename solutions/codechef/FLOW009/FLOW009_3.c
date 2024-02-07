// DATE: 07/02/2024, 05:49:06
// PROBLEM NAME: Total Expenses
// PROBLEM URL: https://www.codechef.com/problems/FLOW009
// PROBLEM DIFFICULTY RATTING: 861
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t, q, p;
    float ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &q, &p);
        ans = (q*p);
        
        if (q > 1000){
            float off = (float) ans * 0.1;
            ans -= off;
        }

        printf("%f\n", ans);

    }

}



