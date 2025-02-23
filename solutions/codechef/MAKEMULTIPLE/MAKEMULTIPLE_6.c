// DATE: 28/10/2022, 06:14:14
// PROBLEM NAME: Make Multiple
// PROBLEM URL: https://www.codechef.com/problems/MAKEMULTIPLE
// PROBLEM DIFFICULTY RATTING: 1163
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        
        if (b%a == 0 || (b-a) >= a)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}



