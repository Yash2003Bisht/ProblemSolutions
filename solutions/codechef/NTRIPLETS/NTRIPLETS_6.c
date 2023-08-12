// DATE: 12/08/2023, 08:39:44
// PROBLEM NAME: N Triplets
// PROBLEM URL: https://www.codechef.com/problems/NTRIPLETS
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.8M

#include <stdio.h>
#include <math.h>
#define lli long long

int main(void) {
    int t, flag;
    lli n, d;
    scanf("%d", &t);

    while(t--){
        scanf("%lli", &n);
        flag = 0;
        
        for (int i=2; i<sqrt(n); i++){
            if (n%i == 0){
                printf("1 %lli %lli\n", i, n/i);
                flag = 1;
                break;
            }
        }
        
        if (!flag)
            printf("-1\n");

    }

	return 0;
}



