// DATE: 16/04/2023, 10:45:11
// PROBLEM NAME: Perfect Trio
// PROBLEM URL: https://www.codechef.com/problems/PERFECTTRIO
// PROBLEM DIFFICULTY RATTING: 455
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        
        if (((a > b && a > c) && a == b+c) ||
            ((b > a && b > c) && b == a+c) ||
            ((c > a && c > b) && c == a+b))
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



