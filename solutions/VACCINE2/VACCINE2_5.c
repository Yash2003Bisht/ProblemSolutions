// QUESTION URL: https://www.codechef.com/problems/VACCINE2
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

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
            else not_risk++;
        }
        
        total_days = (risk%2 == 0 ? risk / d : (risk / d) + 1) \
                     + (not_risk%2 == 0 ? not_risk / d : (not_risk / d) + 1);

        printf("%d\n", total_days);

    }
	return 0;
}



