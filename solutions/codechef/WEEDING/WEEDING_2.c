// DATE: 04/12/2023, 08:50:57
// PROBLEM NAME: Weeding
// PROBLEM URL: https://www.codechef.com/problems/WEEDING
// PROBLEM DIFFICULTY RATTING: 1119
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, m, a, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);

        for (int i=0; i<n; i++)
            scanf("%d", &a);

        if (a+k-1 <= m)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



