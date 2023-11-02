// DATE: 01/11/2023, 09:44:18
// PROBLEM NAME: Chef Eren
// PROBLEM URL: https://www.codechef.com/problems/CHEFEREN
// PROBLEM DIFFICULTY RATTING: 706
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, a, b, odd, even, total_duration;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &a, &b);

        if (n%2 == 0)
            even = n/2, odd = even;
        else
            even = n/2, odd = even + 1;

        total_duration = a*even + b*odd;
        printf("%d\n", total_duration);

    }

	return 0;
}


