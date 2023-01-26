// QUESTION URL: https://www.codechef.com/problems/RECNDSTR
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, i;
    char s[1000001], l_s[1000001], r_s[1000001];

    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        n = strlen(s);

        if (n > 1){

            // left shift
            l_s[0] = s[1];
            for (i=1; i<n; i++) l_s[i] = s[i+1];
            l_s[i-1] = s[0];
            l_s[i] = '\0';

            // right shift
            r_s[0] = s[n-1];
            for (i=1; i<n; i++) r_s[i] = s[i-1];
            r_s[i] = '\0';

            if (strcmp(l_s, r_s)) printf("NO\n");
            else printf("YES\n");

        } else printf("YES\n");

    }

	return 0;
}



