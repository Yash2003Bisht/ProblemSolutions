// DATE: 27/06/2023, 07:30:52
// PROBLEM NAME: Best Coupon
// PROBLEM URL: https://www.codechef.com/problems/CHEAPFOOD
// PROBLEM DIFFICULTY RATTING: 496
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, x, discount;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        discount = x*0.1;
        printf("%d\n", max(discount, 100));
    }
    
	return 0;
}



