// DATE: 16/03/2023, 07:33:59
// PROBLEM NAME: Chef and Street Food
// PROBLEM URL: https://www.codechef.com/problems/STFOOD
// PROBLEM DIFFICULTY RATTING: 1268
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, s, p, v, max_profit, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        max_profit = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d%d%d", &s, &p, &v);
            temp = (p/(s+1)) * v;

            if (temp > max_profit)
                max_profit = temp;

        }
        
        printf("%d\n", max_profit);

    }

	return 0;
}



