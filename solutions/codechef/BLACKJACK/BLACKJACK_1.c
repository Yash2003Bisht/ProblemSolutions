// DATE: 18/10/2023, 08:22:07
// PROBLEM NAME: Blackjack
// PROBLEM URL: https://www.codechef.com/problems/BLACKJACK
// PROBLEM DIFFICULTY RATTING: 681
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, b, possible_num;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &a, &b);
        possible_num = 21 - (a+b);

        if (possible_num > 10)
            printf("-1\n");
        else
            printf("%d\n", possible_num);

    }

	return 0;
}


