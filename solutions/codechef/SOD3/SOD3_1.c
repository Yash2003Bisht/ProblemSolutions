// DATE: 11/09/2023, 09:19:51
// PROBLEM NAME: Yet another SOD problem
// PROBLEM URL: https://www.codechef.com/problems/SOD3
// PROBLEM DIFFICULTY RATTING: 1459
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t;
    long long int l, r, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &l, &r);

        if (l%3 != 0)
            count = r/3 - l/3;
        else
            count = (r/3 - l/3) + 1;

        printf("%lld\n", count);

    }
    
	return 0;
}



