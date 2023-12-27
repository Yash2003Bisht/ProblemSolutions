// DATE: 27/12/2023, 08:59:18
// PROBLEM NAME: Make N Zero
// PROBLEM URL: https://www.codechef.com/problems/MAKENZERO
// PROBLEM DIFFICULTY RATTING: 846
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        while(n >= 3){
            if (n%4 == 0){
                n = 0;
                break;
            }
            n -= 3;
        }

        if (n == 0)
            printf("YES\n");
        else
            printf("NO\n");

    }

}


