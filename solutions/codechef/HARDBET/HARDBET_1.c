// DATE: 24/01/2024, 08:57:21
// PROBLEM NAME: Hardest Problem Bet
// PROBLEM URL: https://www.codechef.com/problems/HARDBET
// PROBLEM DIFFICULTY RATTING: 803
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);

        if (c < a && c < b)
            printf("Alice\n");
        else if (b < c && b < a)
            printf("Bob\n");
        else
            printf("Draw\n");

    }
    
}



