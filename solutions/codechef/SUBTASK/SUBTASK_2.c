// DATE: 05/01/2023, 07:45:41
// PROBLEM NAME: A Subtask Problem
// PROBLEM URL: https://www.codechef.com/problems/SUBTASK
// PROBLEM DIFFICULTY RATTING: 1217
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
int main(void) {
    int t, n, m, k, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        int count = 0, done = 0;

        for (int i=0; i<n; i++) {
            scanf("%d", &a);

            if (a == 1 && !done) count++;
            else done = 1;
        }
        
        if (count == n) printf("100\n");
        else if (count == m) printf("%d\n", k);
        else printf("0\n");

    }

	return 0;
}



