// DATE: 12/03/2023, 12:57:41
// PROBLEM NAME: Red Alert
// PROBLEM URL: https://www.codechef.com/problems/REDALERT
// PROBLEM DIFFICULTY RATTING: 1271
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, d, h, a, level, flag;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &d, &h);
        level = 0, flag = 1;

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (flag){
                if (a > 0)
                    level += a;
                else 
                    level = max(0, level - d);
                
                if (level > h)
                    flag = 0;
            }
        }

        if (!flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
	return 0;
}



