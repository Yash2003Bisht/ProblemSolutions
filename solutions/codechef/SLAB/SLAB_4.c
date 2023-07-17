// DATE: 17/07/2023, 07:50:05
// PROBLEM NAME: Tax Slabs
// PROBLEM URL: https://www.codechef.com/problems/SLAB
// PROBLEM DIFFICULTY RATTING: 1406
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, total_tax, temp;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        total_tax = 0;

        // from Rs. 250,001 to Rs. 500,000, Tax rate 5%
        temp = min(n, 500000) - 250000;
        total_tax += temp * 0.05;
        
        // from Rs. 500,001 to Rs. 750,000, Tax rate 10%
        temp = min(n, 750000) - 500000;
        total_tax += temp > 0 ? temp * 0.10 : 0;
        
        // from Rs. 750,001 to Rs. 1,000,000, Tax rate 15%
        temp = min(n, 1000000) - 750000;
        total_tax += temp > 0 ? temp * 0.15 : 0;

        // from Rs. 1,000,001 to Rs. 1,250,000, Tax rate 20%
        temp = min(n, 1250000) - 1000000;
        total_tax += temp > 0 ? temp * 0.20 : 0;

        // from Rs. 1,250,001 to Rs. 1,500,000, Tax rate 25%
        temp = min(n, 1500000) - 1250000;
        total_tax += temp > 0 ? temp * 0.25 : 0;

        // above Rs. 1,500,000, Tax rate 30%
        temp = n - 1500000;
        total_tax += temp > 0 ? temp * 0.30 : 0;
        
        printf("%d\n", n - total_tax);

    }
    
	return 0;
}


