// DATE: 04/07/2023, 01:29:13
// PROBLEM NAME: Tekken
// PROBLEM URL: https://www.codechef.com/problems/TEKKEN
// PROBLEM DIFFICULTY RATTING: 947
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, a, b, c, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        temp = min(b, c);
        b -= temp, c -= temp;
        a -= min(a, b);
        a -= min(a, c);

        if (a > 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



