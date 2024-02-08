// DATE: 08/02/2024, 09:48:53
// PROBLEM NAME: Drunk Alcoholic
// PROBLEM URL: https://www.codechef.com/problems/DRUNKALK
// PROBLEM DIFFICULTY RATTING: 874
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, k, mid;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &k);
        mid = k/2;
        printf("%d\n", (k - mid)*3 - mid);

    }
    
}



