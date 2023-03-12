// DATE: 12/03/2023, 02:53:30
// PROBLEM NAME: Average of Three
// PROBLEM URL: https://www.codechef.com/problems/AVGOF3
// PROBLEM DIFFICULTY RATTING: 1141
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        printf("%d %d %d\n", n-1, n, n+1);
    }
    
	return 0;
}



