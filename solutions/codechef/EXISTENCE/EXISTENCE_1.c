// DATE: 16/02/2024, 09:30:57
// PROBLEM NAME: Existence
// PROBLEM URL: https://www.codechef.com/problems/EXISTENCE
// PROBLEM DIFFICULTY RATTING: 928
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t;
    unsigned long long x, y, ans1, ans2;
    scanf("%d", &t);

    while(t--){
        scanf("%llu%llu", &x, &y);
        ans1 = (x*x*x*x) + (4 * (y*y));
        ans2 = 4 * (x*x) * y;
        if (ans1 == ans2)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
}



