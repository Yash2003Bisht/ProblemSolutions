// QUESTION URL: https://www.codechef.com/problems/COUPON2
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, d, c, d1_cost, d2_cost, temp;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &d, &c);
        d1_cost = 0, d2_cost = 0;
        
        for (int i=0; i<6; i++){
            scanf("%d", &temp);
            if (i < 3) d1_cost += temp;
            else d2_cost += temp;
        }
        
        temp = d1_cost + d2_cost;

        if ((temp + c < temp + 2*d && d1_cost >= 150 && d2_cost >= 150) || \
           ((temp + c + d < temp + 2*d) && (d1_cost >= 150 || \
           d2_cost >= 150))) printf("YES\n");
        else printf("NO\n");

    }
	return 0;
}



