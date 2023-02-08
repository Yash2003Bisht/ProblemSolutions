// QUESTION URL: https://www.codechef.com/problems/WALK
// STATUS: accepted
// TIME: 0.11
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, w, min_velocity;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min_velocity = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &w);
            if (min_velocity < w+i) min_velocity = w+i;
        }
        
        printf("%d\n", min_velocity);

    }
    
	return 0;
}


