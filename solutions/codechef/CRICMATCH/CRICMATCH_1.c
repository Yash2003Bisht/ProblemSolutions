// DATE: 28/06/2023, 07:34:59
// PROBLEM NAME: Cricket Match
// PROBLEM URL: https://www.codechef.com/problems/CRICMATCH
// PROBLEM DIFFICULTY RATTING: 505
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);

        if (m*36 >= n)
            printf("YES\n");
        else
            printf("NO\n");
    }

	return 0;
}


