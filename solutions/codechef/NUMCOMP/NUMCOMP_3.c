// DATE: 10/05/2023, 07:49:46
// PROBLEM NAME: Archi and Comparsion
// PROBLEM URL: https://www.codechef.com/problems/NUMCOMP
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t;
    long long a, b, n;

    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld", &a, &b, &n);

        if (n%2 == 0){
            if (abs(a) > abs(b))
                printf("1\n");
            else if (abs(a) < abs(b))
                printf("2\n");
            else
                printf("0\n");
        } else {
            if (a > b)
                printf("1\n");
            else if (a < b)
                printf("2\n");
            else
                printf("0\n");
        }
        
    }
    
	return 0;
}



