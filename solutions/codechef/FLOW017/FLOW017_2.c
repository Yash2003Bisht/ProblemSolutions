// DATE: 13/11/2023, 10:12:27
// PROBLEM NAME: Second Largest
// PROBLEM URL: https://www.codechef.com/problems/FLOW017
// PROBLEM DIFFICULTY RATTING: 730
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.8M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", max(min(a,b), max(min(b, c), min(a, c))));
    }

	return 0;
}




