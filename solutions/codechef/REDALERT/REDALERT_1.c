// DATE: 12/03/2023, 01:05:56
// PROBLEM NAME: Red Alert
// PROBLEM URL: https://www.codechef.com/problems/REDALERT
// PROBLEM DIFFICULTY RATTING: 1271
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, d, h;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &d, &h);
        int a[n], level = 0, flag = 1;
        
        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        for (int i=0; i<n; i++){
            if (a[i] > 0)
                level += a[i];
            else 
                level = max(0, level - d);

            if (level > h){
                flag = 0;
                break;
            }
        }
        
        if (flag)
            printf("NO\n");
        else
            printf("YES\n");

    }
	return 0;
}



