// DATE: 28/12/2022, 07:11:29
// PROBLEM NAME: Chef and String
// PROBLEM URL: https://www.codechef.com/problems/RECNDSTR
// PROBLEM DIFFICULTY RATTING: 1206
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, i;
    char s[1000001], l_s[1000001], r_s[1000001];

    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        n = strlen(s);

        // left shift
        l_s[n-1] = s[0];
        for (i=0; i<n-1; i++) l_s[i] = s[i+1];
        l_s[i+1] = '\0';

        // right shift
        r_s[0] = s[n-1];
        for (i=1; i<n; i++) r_s[i] = s[i-1];
        r_s[i] = '\0';

        if (strcmp(l_s, r_s)) printf("NO\n");
        else printf("YES\n");

    }

	return 0;
}



