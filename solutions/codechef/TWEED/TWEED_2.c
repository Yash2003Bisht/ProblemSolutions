// DATE: 25/10/2023, 08:03:31
// PROBLEM NAME: Tweedle-Dee and Tweedle-Dum 
// PROBLEM URL: https://www.codechef.com/problems/TWEED
// PROBLEM DIFFICULTY RATTING: 1484
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, a;
    char p[4];
    scanf("%d", &t);

    while(t--){
        scanf("%d %s", &n, p);

        for (int i=0; i<n; i++)
            scanf("%d", &a);

        if (n == 1 && a%2 == 0 && !strcmp(p, "Dee"))
            printf("Dee\n");
        else
            printf("Dum\n");

    }

	return 0;
}



