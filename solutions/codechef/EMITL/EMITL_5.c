// DATE: 25/10/2023, 08:30:30
// PROBLEM NAME: emitL
// PROBLEM URL: https://www.codechef.com/problems/EMITL
// PROBLEM DIFFICULTY RATTING: 1483
// STATUS: wrong answer
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

        if (counter['L' - 65] >= 2 && counter['T' - 65] >= 2 && counter['I' - 65] >= 2 && counter['M' - 65] >= 2 && counter['E' - 65] >= 2)
            printf("YES\n");
        else
            printf("NO\n");

    }

	return 0;
}



