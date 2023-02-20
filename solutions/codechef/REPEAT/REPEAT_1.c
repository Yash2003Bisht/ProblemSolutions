// DATE: 07/01/2023, 07:49:56
// PROBLEM NAME: Odd Repeat
// PROBLEM URL: https://www.codechef.com/problems/REPEAT
// PROBLEM DIFFICULTY RATTING: 1218
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, k, s;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &k, &s);
        int diff = s - (n*n);
        printf("%d\n", diff/(k-1));
    }
	return 0;
}



