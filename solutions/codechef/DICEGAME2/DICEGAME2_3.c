// DATE: 05/12/2023, 09:13:16
// PROBLEM NAME: Best of Two
// PROBLEM URL: https://www.codechef.com/problems/DICEGAME2
// PROBLEM DIFFICULTY RATTING: 789
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, a1, a2, a3, b1, b2, b3, score1, score2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3);
        score1 = max(a1, max(a2, a3));
        score1 += (a1+a2+a3) - score1 - min(a1, min(a2, a3));

        score2 = max(b1, max(b2, b3));
        score2 += (b1+b2+b3) - score2 - min(b1, min(b2, b3));

        if (score1 > score2)
            printf("Alice\n");
        else if (score1 < score2)
            printf("Bob\n");
        else
            printf("Tie\n");

    }
    
	return 0;
}



