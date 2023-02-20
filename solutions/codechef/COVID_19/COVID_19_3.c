// DATE: 03/11/2022, 06:26:24
// PROBLEM NAME: Covid and Theatre Tickets
// PROBLEM URL: https://www.codechef.com/problems/COVID_19
// PROBLEM DIFFICULTY RATTING: 1077
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        printf("%d\n", (n/2 + n%2)*(m%2 + m/2));
    }
    
	return 0;
}



