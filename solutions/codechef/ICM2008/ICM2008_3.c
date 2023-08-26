// DATE: 26/08/2023, 07:58:23
// PROBLEM NAME: Mr Pr in a Dilemma 
// PROBLEM URL: https://www.codechef.com/problems/ICM2008
// PROBLEM DIFFICULTY RATTING: 1441
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, a, b, c, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &d);

        if (abs(b-a) == abs(c-d) || (c != d && abs(b-a) % abs(c-d) == 0))
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}


