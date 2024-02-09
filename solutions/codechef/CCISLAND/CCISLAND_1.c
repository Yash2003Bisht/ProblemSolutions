// DATE: 09/02/2024, 07:02:31
// PROBLEM NAME: Chef On Island
// PROBLEM URL: https://www.codechef.com/problems/CCISLAND
// PROBLEM DIFFICULTY RATTING: 878
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define min(a, b)(a>b?b:a)

int main(void) {
    int t, x, y, xr, yr, d;
    float m_d;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d%d", &x, &y, &xr, &yr, &d);
        m_d = min((float) x/xr, (float) y/yr);
        
        if (m_d >= d)
            printf("YES\n");
        else
            printf("NO\n");
        
    }

}



