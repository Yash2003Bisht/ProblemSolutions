// DATE: 18/11/2023, 08:44:01
// PROBLEM NAME: Building Race
// PROBLEM URL: https://www.codechef.com/problems/BUILDINGRACE
// PROBLEM DIFFICULTY RATTING: 739
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, a, b, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &x, &y);
        float chef_time = (float) a/x, chefina_time = (float) b/y;

        if (chef_time == chefina_time)
            printf("Both\n");
        else if (chef_time > chefina_time)
            printf("Chefina\n");
        else
            printf("Chef\n");

    }
    
	return 0;
}



