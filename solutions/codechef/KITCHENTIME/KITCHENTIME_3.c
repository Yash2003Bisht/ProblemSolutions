// QUESTION URL: https://www.codechef.com/problems/KITCHENTIME
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", y-x);
        
    }
    
	return 0;
}



