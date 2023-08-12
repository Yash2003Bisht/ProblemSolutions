// DATE: 12/08/2023, 08:41:24
// PROBLEM NAME: N Triplets
// PROBLEM URL: https://www.codechef.com/problems/NTRIPLETS
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: wrong answer
// TIME: 1.96
// MEMORY: 1.7M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, flag;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        flag = 0;
        
        for (int i=2; i<n; i++){
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



