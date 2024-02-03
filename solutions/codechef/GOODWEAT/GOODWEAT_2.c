// DATE: 03/02/2024, 09:05:48
// PROBLEM NAME: Good Weather
// PROBLEM URL: https://www.codechef.com/problems/GOODWEAT
// PROBLEM DIFFICULTY RATTING: 835
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, a1, a2, a3, a4, a5, a6, a7;
	scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7);

        if (a1+a2+a3+a4+a5+a6+a7 >= 4)
            printf("YES\n");
        else
            printf("NO\n");

    }

}



