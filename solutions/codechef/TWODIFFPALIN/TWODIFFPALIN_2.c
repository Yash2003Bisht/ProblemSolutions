// DATE: 03/01/2023, 07:18:57
// PROBLEM NAME: Two Different Palindromes
// PROBLEM URL: https://www.codechef.com/problems/TWODIFFPALIN
// PROBLEM DIFFICULTY RATTING: 1216
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &a, &b);

        if ((a%2 != 0 && b%2 != 0) || (b == 1 || a == 1)) printf("No\n");
        else printf("Yes\n");
    }

	return 0;
}



