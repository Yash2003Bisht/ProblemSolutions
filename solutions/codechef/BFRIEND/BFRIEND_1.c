// DATE: 09/05/2023, 07:27:23
// PROBLEM NAME: Bob and His Friends
// PROBLEM URL: https://www.codechef.com/problems/BFRIEND
// PROBLEM DIFFICULTY RATTING: 1332
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}


int main(void) {
    int t;
    long long int n, a, b, c, i, friends_floors, floor_dis, min_floor_dis;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&a);
        scanint(&b);
        scanint(&c);
        min_floor_dis = LONG_MAX;

        for (i=0; i<n; i++){
            scanint(&friends_floors);

            floor_dis = abs(b - friends_floors) + abs(a - friends_floors);
            if (min_floor_dis > floor_dis)
                min_floor_dis = floor_dis;
        }

        printf("%lld\n", min_floor_dis + c);

    }
    
	return 0;
}



