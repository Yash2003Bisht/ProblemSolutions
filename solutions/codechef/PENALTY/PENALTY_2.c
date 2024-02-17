// DATE: 16/02/2024, 09:00:16
// PROBLEM NAME: Penalty Shots
// PROBLEM URL: https://www.codechef.com/problems/PENALTY
// PROBLEM DIFFICULTY RATTING: 925
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, count1, count2;
    scanf("%d", & t);

    while (t--) {
        count1 = 0, count2 = 0;

        for (int i = 0; i < 10; i++) {
            scanf("%d", &a);

            if (a){
                if (i%2 == 0)
                    count1++;
                else
                    count2++;
            }

        }

        if (count1 > count2)
            printf("1\n");
        else if (count2 > count1)
            printf("2\n");
        else
            printf("0\n");

    }

}

