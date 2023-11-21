// DATE: 21/11/2023, 09:03:21
// PROBLEM NAME: Chef And Magical Path
// PROBLEM URL: https://www.codechef.com/problems/CHEFPATH
// PROBLEM DIFFICULTY RATTING: 1503
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t;
    unsigned long long int n, m;
    scanf("%d", &t);

    while(t--){
        scanf("%u%u", &n, &m);
        
        if ((n%2 != 0 && m%2 != 0) || ((n == 1 && m > 2) || (m == 1 && n > 2)))
            printf("No\n");
        else
            printf("Yes\n");
        
    }

	return 0;
}



