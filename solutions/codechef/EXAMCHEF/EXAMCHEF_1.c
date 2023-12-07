// DATE: 07/12/2023, 09:46:46
// PROBLEM NAME: Exams
// PROBLEM URL: https://www.codechef.com/problems/EXAMCHEF
// PROBLEM DIFFICULTY RATTING: 519
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);

        float percentage = (float) z/(x*y);

        if (percentage > 0.5)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



