// DATE: 02/02/2024, 02:14:30
// PROBLEM NAME: Car Choice
// PROBLEM URL: https://www.codechef.com/problems/CARCHOICE
// PROBLEM DIFFICULTY RATTING: 861
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, x1, x2, y1, y2;
	float c1, c2;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
	    c1 = (float)y1/x1, c2 = (float)y2/x2;

        if (c1 == c2)
            printf("0\n");
        else if (c1 < c2)
            printf("-1\n");
        else
            printf("1\n");

	}
	
}



