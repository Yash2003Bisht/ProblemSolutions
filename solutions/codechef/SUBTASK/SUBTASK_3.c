// DATE: 05/01/2023, 07:41:33
// PROBLEM NAME: A Subtask Problem
// PROBLEM URL: https://www.codechef.com/problems/SUBTASK
// PROBLEM DIFFICULTY RATTING: 1217
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
int main(void) {
    int t, n, m, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        int a[n], count1 = 0, count2 = 0;

        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            count1 += a[i];
        }
        
        for (int i=0; i<m; i++) count2 += a[i];
        
        if (count1 == n) printf("100\n");
        else if (count2 == m) printf("%d\n", k);
        else printf("0\n");

    }

	return 0;
}



