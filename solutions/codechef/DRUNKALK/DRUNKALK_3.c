// DATE: 08/02/2024, 09:48:08
// PROBLEM NAME: Drunk Alcoholic
// PROBLEM URL: https://www.codechef.com/problems/DRUNKALK
// PROBLEM DIFFICULTY RATTING: 874
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &k);

        printf("%d\n", (k - k/2)*3 - k/2);

    }
    
}



