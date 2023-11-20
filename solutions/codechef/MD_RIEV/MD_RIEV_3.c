// DATE: 20/11/2023, 08:33:11
// PROBLEM NAME: Palindromic Prime Numbers
// PROBLEM URL: https://www.codechef.com/problems/MD_RIEV
// PROBLEM DIFFICULTY RATTING: 1253
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.8M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        if (n > 4){
            printf("1 %d\n", n-1);
        } else {
            printf("0 %d\n", n);
        }

    }

	return 0;
}



