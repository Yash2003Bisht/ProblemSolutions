// DATE: 26/08/2023, 08:01:34
// PROBLEM NAME: Mr Pr in a Dilemma 
// PROBLEM URL: https://www.codechef.com/problems/ICM2008
// PROBLEM DIFFICULTY RATTING: 1441
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, a, b, c, d, v1, v2;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        v1 = abs(b-a), v2 = abs(c-d);
        if (v1 == v2 || (v2 && v1%v2 == 0))
            printf("YES\n");
        else
            printf("NO\n");

    }

	return 0;
}


