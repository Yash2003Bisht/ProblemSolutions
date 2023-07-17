// DATE: 17/07/2023, 08:03:38
// PROBLEM NAME: Tax Slabs
// PROBLEM URL: https://www.codechef.com/problems/SLAB
// PROBLEM DIFFICULTY RATTING: 1406
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, total_tax, temp, slab;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        total_tax = 0, slab = n/250000;

        switch (slab){
            case 0:
                total_tax = 0;
                break;
            case 1:
                total_tax = (n - 250000) * 0.05;
                break;
            case 2:
                total_tax = 12500 + (n - 500000) * 0.10;
                break;
            case 3:
                total_tax = 37500 + (n - 750000) * 0.15;
                break;
            case 4:
                total_tax = 75000 + (n - 1000000) * 0.20;
                break;
            case 5:
                total_tax = 125000 + (n - 1250000) * 0.25;
                break;
            default:
                total_tax = 187500 + (n - 1500000) * 0.30;
        }

        printf("%d\n", n - total_tax);

    }
    
	return 0;
}


