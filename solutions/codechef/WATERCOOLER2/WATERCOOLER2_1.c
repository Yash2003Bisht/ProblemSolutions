// DATE: 30/12/2023, 04:21:40
// PROBLEM NAME: The Cooler Dilemma 2
// PROBLEM URL: https://www.codechef.com/problems/WATERCOOLER2
// PROBLEM DIFFICULTY RATTING: 798
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, y, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        count = y/x;

        if (count*x < y)
            printf("%d\n", count);
        else
            printf("%d\n", count - 1);

    }
    
}



