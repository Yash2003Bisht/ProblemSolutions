// DATE: 07/02/2023, 08:11:01
// PROBLEM NAME: Lift Requests
// PROBLEM URL: https://www.codechef.com/problems/LIFTME
// PROBLEM DIFFICULTY RATTING: 1247
// STATUS: wrong answer
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, q, f, d;
    long long int floor_travel;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &q);
        floor_travel = 0;
        
        for (int i=0; i<q; i++){
            scanf("%d%d", &f, &d);
            floor_travel += abs(n - f) + abs(d - f);
            n = d;
            
        }
        
        printf("%lld\n", floor_travel);
        
    }

	return 0;
}



