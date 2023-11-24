// DATE: 23/11/2023, 09:28:36
// PROBLEM NAME: One Stone or Two Stones
// PROBLEM URL: https://www.codechef.com/problems/ONEORTWO
// PROBLEM DIFFICULTY RATTING: 1504
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        if (y == x){
            if (x%2 == 0)
                printf("CHEFINA\n");
            else
                printf("CHEF\n");
        } else if (abs(y-x) >= 2){
            if (y > x)
                printf("CHEFINA\n");
            else
                printf("CHEF\n");
        } else {
            if (min(x, y)%2 == 0)
                printf("CHEFINA\n");
            else
                printf("CHEF\n");
        }
        
    }
    
	return 0;
}



