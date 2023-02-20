// DATE: 26/10/2022, 08:34:18
// PROBLEM NAME: Bob at the Bank
// PROBLEM URL: https://www.codechef.com/problems/BOBBANK
// PROBLEM DIFFICULTY RATTING: 481
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, w, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &w, &x, &y, &z);
        printf("%d\n", w+((x-y)*z));
    }
	return 0;
}



