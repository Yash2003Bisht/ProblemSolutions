// DATE: 07/02/2023, 07:59:51
// PROBLEM NAME: Lift Requests
// PROBLEM URL: https://www.codechef.com/problems/LIFTME
// PROBLEM DIFFICULTY RATTING: 1247
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>
#include <math.h>

int main(void) {
    long long int t, n, q, f, d, curr_floor, floor_travel;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &q);
        curr_floor = 0, floor_travel = 0;
        
        for (int i=0; i<q; i++){
            scanf("%lld%lld", &f, &d);
            
            if (curr_floor != f) floor_travel += abs(curr_floor - f);

            curr_floor = d;
            floor_travel += abs(d - f);
            
        }
        
        printf("%lld\n", floor_travel);
        
    }

	return 0;
}



