// DATE: 12/09/2023, 09:23:06
// PROBLEM NAME: Chef And his Cake
// PROBLEM URL: https://www.codechef.com/problems/GIT01
// PROBLEM DIFFICULTY RATTING: 1451
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

char start;

int replacement_count(int m, char *s){
    int count = 0;

    for (int j=0; j<m; j++){
        if (start != s[j])
            count += start == 'R' ? 3 : 5;

        if (m%2 == 0 && j == m-1)
            continue;

        start = start == 'R' ? 'G' : 'R';
    }

    return count;
}

int main(void) {
    int t, n, m, count1, count2;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);
        char s[n][m];

        for (int i=0; i<n; i++)
            scanf("%s", s[i]);

        count1 = 0, count2 = 0;

        start = 'R';
        for (int i=0; i<n; i++)
            count1 += replacement_count(m, s[i]);

        start = 'G';
        for (int i=0; i<n; i++)
            count2 += replacement_count(m, s[i]);

        printf("%d\n", min(count1, count2));

    }

	return 0;
}


