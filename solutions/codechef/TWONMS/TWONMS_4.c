// DATE: 22/04/2023, 12:44:20
// PROBLEM NAME: Two Numbers
// PROBLEM URL: https://www.codechef.com/problems/TWONMS
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a>b?b:a)
#define max(a, b)(a>b?a:b)

int main(void) {
    int t;
    long long int a, b, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld", &a, &b, &n);
        
        if (n%2 == 0)
            a *= (n/2)*2, b *= (n/2)*2;
        else
            a *= ((n/2)+1)*2, b *= n>1 ? (n/2)*2 : 1;
        
        printf("%lld\n", max(a, b)/min(a, b));
        
    }
    
	return 0;
}



