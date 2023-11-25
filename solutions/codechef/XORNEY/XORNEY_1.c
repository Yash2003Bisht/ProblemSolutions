// DATE: 25/11/2023, 09:53:30
// PROBLEM NAME: XOR! Wait for it
// PROBLEM URL: https://www.codechef.com/problems/XORNEY
// PROBLEM DIFFICULTY RATTING: 1389
// STATUS: accepted
// TIME: 0.24
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t;
    unsigned long long int l, r, odd_count, diff;
    scanf("%d", &t);

    while(t--){
        scanf("%li%li", &l, &r);
        odd_count = 0;

        if (r == l)
            odd_count = r%2 == 0 ? 0 : 1;
        else {
            diff = r - l;

            if (diff%2 == 0)
                odd_count = diff/2;
            else
                odd_count = l%2 == 0 ? diff/2 : diff/2 + 1;

            if (r%2 != 0)
                odd_count++;

        }

        if (odd_count%2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");

    }

	return 0;
}



