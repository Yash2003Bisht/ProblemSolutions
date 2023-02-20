// DATE: 12/10/2022, 04:58:45
// PROBLEM NAME: Podium Finish
// PROBLEM URL: https://www.codechef.com/problems/PODIUM
// PROBLEM DIFFICULTY RATTING: 341
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a,&b);
        printf("%d\n", a+b);
    }
	return 0;
}



