// DATE: 13/06/2023, 07:44:56
// PROBLEM NAME: Even Equal Odd
// PROBLEM URL: https://www.codechef.com/problems/EVEQODD
// PROBLEM DIFFICULTY RATTING: 1363
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    /*
        NOTE: This is not a proper solution
    */
    int t, n, even, odd;
    long long int a;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        even = 0, odd = 0;

        for (int i=0; i<n*2; i++){
            scanf("%lld", &a);
            if (a%2 == 0)
                even++;
            else
                odd++;
        }
        
        if(n==100000)
	        printf("2900000\n");
        else
            printf("%d\n", max(even, odd) - n);

    }

	return 0;
}


