// QUESTION URL: https://www.codechef.com/problems/PIZZA_BURGER
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        if (x >= y){
            printf("PIZZA\n");
        } else if (x >= z){
            printf("BURGER\n");
        } else{
            printf("NOTHING\n");
        }
    }
	return 0;
}



