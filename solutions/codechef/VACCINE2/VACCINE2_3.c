// DATE: 09/01/2023, 07:45:11
// PROBLEM NAME: Vaccine Distribution
// PROBLEM URL: https://www.codechef.com/problems/VACCINE2
// PROBLEM DIFFICULTY RATTING: 1219
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, d, a, risk, not_risk, total_days;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &d);
        risk = 0, not_risk = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &a);
            if (a >= 80 || a <= 9) risk++;
        }
        
        not_risk = n - risk;
        total_days = (risk%d == 0 ? risk / d : (risk / d) + 1) \
                     + (not_risk%d == 0 ? not_risk / d : (not_risk / d) + 1);

        printf("%d\n", total_days);

    }
	return 0;
}



