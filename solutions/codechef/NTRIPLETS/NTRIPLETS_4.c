// DATE: 12/08/2023, 08:40:36
// PROBLEM NAME: N Triplets
// PROBLEM URL: https://www.codechef.com/problems/NTRIPLETS
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, flag;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        flag = 0;
        
        for (int i=2; i<sqrt(n); i++){
            if (n%i == 0){
                printf("1 %d %d\n", i, n/i);
                flag = 1;
                break;
            }
        }
        
        if (!flag)
            printf("-1\n");

    }

	return 0;
}



