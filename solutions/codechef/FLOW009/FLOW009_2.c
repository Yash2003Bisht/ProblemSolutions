// DATE: 07/02/2024, 05:57:50
// PROBLEM NAME: Total Expenses
// PROBLEM URL: https://www.codechef.com/problems/FLOW009
// PROBLEM DIFFICULTY RATTING: 861
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, q, p;
    float ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &q, &p);

        if (q >= 1000)
            printf("%f\n", (float) (q*p)-(q*p*0.1));
        else
            printf("%f\n", (float) q*p);

    }

}



