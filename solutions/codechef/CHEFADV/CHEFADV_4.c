// DATE: 22/09/2023, 08:41:27
// PROBLEM NAME: Chef and Adventures
// PROBLEM URL: https://www.codechef.com/problems/CHEFADV
// PROBLEM DIFFICULTY RATTING: 1462
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, m, x, y, k, p;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &n, &m, &x, &y);
        k = n - 1;
        p = m - 1;

        if ( (k%x == 0 && p%y == 0) || ( (k-1)%x == 0 && (p-1)%y == 0) && (k>0  && p>0))
            printf("Chefirnemo\n");
        else
            printf("Pofik\n");

    }
    
	return 0;
}


