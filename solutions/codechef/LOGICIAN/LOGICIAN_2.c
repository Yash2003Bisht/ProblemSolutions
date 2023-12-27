// DATE: 15/12/2023, 08:54:49
// PROBLEM NAME: 3 Logicians Walk into a Bar
// PROBLEM URL: https://www.codechef.com/problems/LOGICIAN
// PROBLEM DIFFICULTY RATTING: 1269
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, not_want, start;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);

        not_want = 0;

        for (int i=0; i<n; i++){
            if (s[i] == '0'){
                not_want = 1;
                start = i;
                break;
            } else if (i == n-1){
                printf("YES\n");
            } else {
                printf("IDK\n");
            }
        }

        if (not_want == 1){
            for (int i=start; i<n; i++)
                printf("NO\n");
        }

    }

	return 0;
}



