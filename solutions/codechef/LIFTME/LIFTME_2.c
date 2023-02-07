// QUESTION URL: https://www.codechef.com/problems/LIFTME
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, q, f, d;
    long long int floor_travel;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &q);
        floor_travel = 0, n = 0;
        
        for (int i=0; i<q; i++){
            scanf("%d%d", &f, &d);
            floor_travel += abs(n - f) + abs(d - f);
            n = d;
        }
        
        printf("%lld\n", floor_travel);
        
    }

	return 0;
}



