// DATE: 08/08/2023, 07:54:42
// PROBLEM NAME: Chef and Girlfriend
// PROBLEM URL: https://www.codechef.com/problems/GERALD04
// PROBLEM DIFFICULTY RATTING: 1421
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include<string.h>

int main(void) {
    int t, friend_hour, friend_min, chef_hour, chef_min, dist;
    float plan1, plan2;
    char time_str[6], temp[3];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", time_str);
        temp[0] = time_str[0];
        temp[1] = time_str[1];
        temp[2] = '\0';
        sscanf(temp, "%d", &friend_hour);
        
        temp[0] = time_str[3];
        temp[1] = time_str[4];
        temp[2] = '\0';
        sscanf(temp, "%d", &friend_min);
        
        scanf("%s", time_str);
        temp[0] = time_str[0];
        temp[1] = time_str[1];
        temp[2] = '\0';
        sscanf(temp, "%d", &chef_hour);

        temp[0] = time_str[3];
        temp[1] = time_str[4];
        temp[2] = '\0';
        sscanf(temp, "%d", &chef_min);

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



