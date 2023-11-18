// DATE: 18/11/2023, 08:42:11
// PROBLEM NAME: Building Race
// PROBLEM URL: https://www.codechef.com/problems/BUILDINGRACE
// PROBLEM DIFFICULTY RATTING: 739
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, a, b, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &x, &y);

        if (a/x == b/y)
            printf("Both\n");
        else if (a/x > b/y)
            printf("Chefina\n");
        else
            printf("Chef\n");

    }
    
	return 0;
}



