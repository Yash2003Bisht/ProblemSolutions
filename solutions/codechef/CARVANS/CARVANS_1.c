// DATE: 01/03/2023, 08:19:56
// PROBLEM NAME: Carvans
// PROBLEM URL: https://www.codechef.com/problems/CARVANS
// PROBLEM DIFFICULTY RATTING: 1264
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t, n, s, count, min_speed;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0, min_speed = INT_MAX;
        
        for (int i=0; i<n; i++){
            scanf("%d", &s);

            if (s <= min_speed){
                count++;
                min_speed = s;
            }

        }

        printf("%d\n", count);

    }

	return 0;
}



