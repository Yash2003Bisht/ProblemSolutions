// DATE: 26/07/2023, 10:00:48
// PROBLEM NAME: Expert Setter
// PROBLEM URL: https://www.codechef.com/problems/EXPERT
// PROBLEM DIFFICULTY RATTING: 561
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    double x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lf%lf", &x, &y);
        
        if ((double) y/x >= 0.5)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



