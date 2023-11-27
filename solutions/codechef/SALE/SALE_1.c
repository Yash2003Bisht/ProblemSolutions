// DATE: 27/11/2023, 09:20:27
// PROBLEM NAME: Get Lowest Free
// PROBLEM URL: https://www.codechef.com/problems/SALE
// PROBLEM DIFFICULTY RATTING: 778
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", (a+b+c) - min(c, min(a, b)));
    }
    
	return 0;
}



