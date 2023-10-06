// DATE: 06/10/2023, 08:39:56
// PROBLEM NAME: Chef Goes to the Cinema
// PROBLEM URL: https://www.codechef.com/problems/CO92SUBW
// PROBLEM DIFFICULTY RATTING: 1493
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define min(a,b)(a>b?b:a)
#define max(a,b)(a>b?a:b)

int nearest_station_time(int n){
    int term = 1, next = 1, prev = 1;

    while(next<n){
        term++;
        prev = next;
        next += term;
    }

    return term + min(n - prev - 1, next - n);
}

int main(void) {
    int t, x, station_time;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        station_time = nearest_station_time(x);
        printf("%d\n", max(1, min(x, station_time)));
    }
    
	return 0;
}


