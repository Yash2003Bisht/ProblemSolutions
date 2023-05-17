// DATE: 17/05/2023, 07:18:07
// PROBLEM NAME: Chef and Chocolate
// PROBLEM URL: https://www.codechef.com/problems/CHCHCL
// PROBLEM DIFFICULTY RATTING: 1343
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &m);
        
        if ((n%2 != 0 && m%2 == 0) || (n%2 == 0 && m%2 != 0))
            printf("Yes\n");
        else
            printf("No\n");
        
    }
    
	return 0;
}



