// QUESTION URL: https://www.codechef.com/problems/DISABLEDKING
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        if (n % 2 == 0 || n == 1) printf("%d\n", n);
        else printf("%d\n", n-1);

    }

	return 0;
}



