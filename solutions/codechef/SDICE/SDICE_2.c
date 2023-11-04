// DATE: 04/11/2023, 09:35:54
// PROBLEM NAME: Chef and Dice
// PROBLEM URL: https://www.codechef.com/problems/SDICE
// PROBLEM DIFFICULTY RATTING: 1477
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, one_layer_sum[] = {20, 36, 51, 60};
    long long int n;
    scanf("%d", &t);

    while(t--){
        scanf("%lld", &n);

        if (n <= 4)
            printf("%d\n", one_layer_sum[n-1]);
        else if (n%4 == 0)
            printf("%lld\n", 44*(n/4 - 1) + 60);
        else
            printf("%lld\n", 44*(n/4) + 4*(4 - n%4) + one_layer_sum[(n%4)-1]);

    }

	return 0;
}



