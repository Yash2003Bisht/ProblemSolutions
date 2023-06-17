// DATE: 16/06/2023, 07:32:26
// PROBLEM NAME: The Deadly Sin
// PROBLEM URL: https://www.codechef.com/problems/SINS
// PROBLEM DIFFICULTY RATTING: 1372
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.2M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void) {
    int t;
    long long int x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &x, &y);
        while (x >= 1 && y >= 1 && x != y){
            if (x > y)
                x -= y;
            else if (x < y)
                y -= x;
        }

        printf("%lld\n", x+y);
    }
    
	return 0;
}


