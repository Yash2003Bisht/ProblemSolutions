// DATE: 11/11/2023, 08:56:41
// PROBLEM NAME: Lucky Number Game
// PROBLEM URL: https://www.codechef.com/problems/HP18
// PROBLEM DIFFICULTY RATTING: 1500
// STATUS: accepted
// TIME: 0.13
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, a, b, A, count1, count2, common;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &a, &b);
        count1 = 0, count2 = 0, common = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &A);

            if (A%a == 0 && A%b == 0)
                common++;
            else if (A%a == 0)
                count1++;
            else if (A%b == 0)
                count2++;

        }

        if (common)
            count1++;

        if (count1 > count2)
            printf("BOB\n");
        else
            printf("ALICE\n");

    }
    
	return 0;
}



