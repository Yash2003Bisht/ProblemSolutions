// DATE: 11/11/2023, 08:56:57
// PROBLEM NAME: Lucky Number Game
// PROBLEM URL: https://www.codechef.com/problems/HP18
// PROBLEM DIFFICULTY RATTING: 1500
// STATUS: partially accepted
// TIME: 0.15
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, a, b, A, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &a, &b);
        count1 = 0, count2 = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &A);

            if (A%a == 0)
                count1++;
            if (A%b == 0)
                count2++;

        }

        if (count1 == count2 || b%a == 0){
            printf("BOB\n");
        } else if (count1 > count2){
            printf("BOB\n");
        } else {
            printf("ALICE\n");
        }

    }
    
	return 0;
}



