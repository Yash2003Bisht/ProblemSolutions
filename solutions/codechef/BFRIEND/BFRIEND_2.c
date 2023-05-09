// DATE: 09/05/2023, 07:23:43
// PROBLEM NAME: Bob and His Friends
// PROBLEM URL: https://www.codechef.com/problems/BFRIEND
// PROBLEM DIFFICULTY RATTING: 1332
// STATUS: accepted
// TIME: 0.07
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int t;
    long long int n, a, b, c, i, friends_floors, floor_dis, min_floor_dis;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld%lld", &n, &a, &b, &c);
        min_floor_dis = LONG_MAX;

        for (i=0; i<n; i++){
            scanf("%lld", &friends_floors);

            floor_dis = abs(b - friends_floors) + abs(a - friends_floors);
            if (min_floor_dis > floor_dis)
                min_floor_dis = floor_dis;
        }

        printf("%lld\n", min_floor_dis + c);

    }
    
	return 0;
}



