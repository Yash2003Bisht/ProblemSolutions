// DATE: 08/08/2023, 08:01:09
// PROBLEM NAME: Chef and Girlfriend
// PROBLEM URL: https://www.codechef.com/problems/GERALD04
// PROBLEM DIFFICULTY RATTING: 1421
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

void store_time(char* time_str, int* hour, int* min){
    char temp[3];
    
    /* store hours */
    temp[0] = time_str[0];
    temp[1] = time_str[1];
    temp[2] = '\0';
    
    // convert to int
    sscanf(temp, "%d", hour);
    
    /* store minutes */
    temp[0] = time_str[3];
    temp[1] = time_str[4];
    temp[2] = '\0';
    
    // convert to int
    sscanf(temp, "%d", min);
}

int main(void) {
    int t, friend_hour, friend_min, chef_hour, chef_min, dist;
    float plan1, plan2;
    char time_str[6], temp[3];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", time_str);
        store_time(time_str, &friend_hour, &friend_min);

        scanf("%s", time_str);
        store_time(time_str, &chef_hour, &chef_min);

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



