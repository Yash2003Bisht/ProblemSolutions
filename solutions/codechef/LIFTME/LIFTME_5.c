// QUESTION URL: https://www.codechef.com/problems/LIFTME
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

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
            
            if (curr_floor != f) floor_travel += abs(curr_floor - f);

            curr_floor = d;
            floor_travel += abs(d - f);
            
        }
        
        printf("%lld\n", floor_travel);
        
    }

	return 0;
}



