// DATE: 25/10/2023, 09:00:16
// PROBLEM NAME: emitL
// PROBLEM URL: https://www.codechef.com/problems/EMITL
// PROBLEM DIFFICULTY RATTING: 1483
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t;
    char s[101];
    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        int counter[26] = {0};

        for (int i=0; s[i] != '\0'; i++)
            counter[s[i] - 65]++;

        if ((counter[11] >= 2 && counter[12] >= 2 && counter[19] >= 2 && counter[8] >= 2 && counter[4] >= 2) ||
            (counter[11] == 2 && counter[12] == 2 && counter[19] == 2 && counter[8] == 2 && counter[4] == 1))
            printf("YES\n");
        else
            printf("NO\n");

    }

	return 0;
}



