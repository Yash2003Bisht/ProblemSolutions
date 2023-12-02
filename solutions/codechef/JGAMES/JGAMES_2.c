// DATE: 02/12/2023, 09:39:27
// PROBLEM NAME: Janmansh and Games
// PROBLEM URL: https://www.codechef.com/problems/JGAMES
// PROBLEM DIFFICULTY RATTING: 772
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        if ((y%2 == 0 && x%2 == 0) || (y%2 != 0 && x%2 != 0))
            printf("Janmansh\n");
        else
            printf("Jay\n");
    }
    
	return 0;
}



