// DATE: 16/05/2023, 09:34:02
// PROBLEM NAME: Course Registration
// PROBLEM URL: https://www.codechef.com/problems/COURSEREG
// PROBLEM DIFFICULTY RATTING: 470
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, m, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        if (n+k <= m)
            printf("Yes\n");
        else
            printf("No\n");
    }
    
	return 0;
}



