// DATE: 28/06/2023, 07:29:21
// PROBLEM NAME: The Cooler Dilemma 1
// PROBLEM URL: https://www.codechef.com/problems/WATERCOOLER1
// PROBLEM DIFFICULTY RATTING: 506
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, x, y, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &m);
        
        if (x*m < y)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



