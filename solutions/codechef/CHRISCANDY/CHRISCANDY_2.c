// DATE: 30/12/2023, 08:37:59
// PROBLEM NAME: Christmas Candy
// PROBLEM URL: https://www.codechef.com/problems/CHRISCANDY
// PROBLEM DIFFICULTY RATTING: 1214
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, count, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;

        scanf("%d", &a);
        
        for (int i=1; i<n; i++){
            scanf("%d", &b);

            if (b < a)
                count++;
            else
                a = b;

        }

        printf("%d\n", count);

    }

}


