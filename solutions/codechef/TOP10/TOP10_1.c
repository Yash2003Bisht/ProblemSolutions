// DATE: 08/05/2023, 05:23:17
// PROBLEM NAME: Masterchef finals
// PROBLEM URL: https://www.codechef.com/problems/TOP10
// PROBLEM DIFFICULTY RATTING: 255
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x > 10)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    
	return 0;
}



