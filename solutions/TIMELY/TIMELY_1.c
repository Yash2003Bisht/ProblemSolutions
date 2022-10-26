// QUESTION URL: https://www.codechef.com/problems/TIMELY

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        
        scanf("%d", &n);
        
        if (n >= 30)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



