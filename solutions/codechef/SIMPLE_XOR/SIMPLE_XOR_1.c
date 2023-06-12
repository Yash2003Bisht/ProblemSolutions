// DATE: 12/06/2023, 07:57:17
// PROBLEM NAME: Simple XOR
// PROBLEM URL: https://www.codechef.com/problems/SIMPLE_XOR
// PROBLEM DIFFICULTY RATTING: 1362
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, flag;
    long long int l, r;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld %lld", &l, &r);
        
        if (r-l == 3 && l%2 != 0)
            printf("-1\n");
        else if (l%2 == 0)
            printf("%lld %lld %lld %lld\n", l, l+1, l+2, l+3);
        else
            printf("%lld %lld %lld %lld\n", l+1, l+2, l+3, l+4);

    }
    
	return 0;
}



