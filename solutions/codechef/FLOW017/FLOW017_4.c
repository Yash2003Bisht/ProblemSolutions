// DATE: 13/11/2023, 10:03:44
// PROBLEM NAME: Second Largest
// PROBLEM URL: https://www.codechef.com/problems/FLOW017
// PROBLEM DIFFICULTY RATTING: 730
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", min(max(a,b), max(b, c)));
    }


	return 0;
}



