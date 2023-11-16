// DATE: 16/11/2023, 08:44:55
// PROBLEM NAME: Selling Insurance
// PROBLEM URL: https://www.codechef.com/problems/AGENTCHEF
// PROBLEM DIFFICULTY RATTING: 732
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        int ans = ceil(100.0 / ((float)x*0.2));
        printf("%d\n", ans);
    }
    
	return 0;
}



