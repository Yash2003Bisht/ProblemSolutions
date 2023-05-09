// DATE: 09/05/2023, 07:22:21
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
#define min(a, b)(a>b?b:a)

int main(void) {
    int t;
    long long int n, a, b, c, i, floor_dis, min_floor_dis;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld%lld", &n, &a, &b, &c);
        long long int friends_floors[n];
        min_floor_dis = LONG_MAX;

        for (i=0; i<n; i++)
            scanf("%lld", &friends_floors[i]);
        
        for (i=0; i<n; i++){
            floor_dis = abs(b - friends_floors[i]) + abs(a - friends_floors[i]);
            if (min_floor_dis > floor_dis)
                min_floor_dis = floor_dis;
        }

        printf("%lld\n", min_floor_dis + c);

    }
    
	return 0;
}



