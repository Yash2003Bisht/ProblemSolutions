// QUESTION URL: https://www.codechef.com/problems/MAKEMULTIPLE
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        flag = (b%a == 0 || (b-a) >= a) ? 1:0;
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}



