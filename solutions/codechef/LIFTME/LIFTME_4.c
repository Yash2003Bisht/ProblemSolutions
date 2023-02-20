// DATE: 07/02/2023, 08:05:28
// PROBLEM NAME: Lift Requests
// PROBLEM URL: https://www.codechef.com/problems/LIFTME
// PROBLEM DIFFICULTY RATTING: 1247
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, q, f, d, curr_floor;
    long long int floor_travel;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &q);
        curr_floor = 0, floor_travel = 0;
        
        for (int i=0; i<q; i++){
            scanf("%d%d", &f, &d);
            
            // don't increase floor travel, if the source floor is equal to current floor
            if (curr_floor != f) floor_travel += abs(curr_floor - f);

            // change the current floor and increase floor travel
            curr_floor = d;
            floor_travel += abs(d - f);
            
        }
        
        printf("%lld\n", floor_travel);
        
    }

	return 0;
}



