// DATE: 12/10/2023, 08:54:04
// PROBLEM NAME: Sunday Brunch
// PROBLEM URL: https://www.codechef.com/problems/BRUNCH
// PROBLEM DIFFICULTY RATTING: 648
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, x, y, plates;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &x, &y);
        plates = y*20;

        if (x < plates){
            int ans = 20 - ceil((float) (plates-x)/y);
            printf("%d\n", ans);
        } else
            printf("20\n");

    }
    
	return 0;
}



