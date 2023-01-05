// QUESTION URL: https://www.codechef.com/problems/TWODIFFPALIN
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



