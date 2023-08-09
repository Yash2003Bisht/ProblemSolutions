// DATE: 08/08/2023, 08:08:03
// PROBLEM NAME: Chef and Girlfriend
// PROBLEM URL: https://www.codechef.com/problems/GERALD04
// PROBLEM DIFFICULTY RATTING: 1421
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, friend_hour, friend_min, chef_hour, chef_min, dist;
    float plan1, plan2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d:%d", &friend_hour, &friend_min);
        scanf("%d:%d", &chef_hour, &chef_min);
        scanf("%d", &dist);

        plan1 = (friend_hour - chef_hour)*60 + (friend_min  - chef_min);

        if (dist*2 <= plan1)
            plan2 = plan1;
        else{
            int return_time = plan1 - dist;
            plan2 = dist + return_time + (float) (dist - return_time) / 2;
        }
        
        printf("%.1f %.1f\n", plan1 + dist, plan2);        
        
    }

	return 0;
}



