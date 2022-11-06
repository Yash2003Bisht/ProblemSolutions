// QUESTION URL: https://www.codechef.com/problems/MAKEMULTIPLE
// STATUS: accepted

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



