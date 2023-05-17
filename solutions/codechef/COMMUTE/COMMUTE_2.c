// DATE: 17/05/2023, 08:47:56
// PROBLEM NAME: The Morning Commute
// PROBLEM URL: https://www.codechef.com/problems/COMMUTE
// PROBLEM DIFFICULTY RATTING: 1268
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, s, x, l, f, ans, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &s);
        ans = 0;

        while(s--){
            scanf("%d%d%d", &x, &l, &f);
            if (ans < x)
                ans = x;
            else if ((diff = (ans-x)%f) != 0)
                ans += f-diff;
            ans += l;
        }

        printf("%d\n", ans);

    }
    
	return 0;
}



