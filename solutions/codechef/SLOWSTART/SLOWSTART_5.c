// DATE: 30/09/2023, 09:17:15
// PROBLEM NAME: Slow Start
// PROBLEM URL: https://www.codechef.com/problems/SLOWSTART
// PROBLEM DIFFICULTY RATTING: 1031
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, h, temp, i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &h);
        i = 0, temp = x/2;

        while(h > 0 && i < 5){
            h -= temp;
            i++;
        }
        
        while(h > 0){
            h -= x;
            i++;
        }

        printf("%d\n", i);

    }
    
	return 0;
}


