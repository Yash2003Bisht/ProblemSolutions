// DATE: 03/03/2023, 08:26:28
// PROBLEM NAME: Ageing
// PROBLEM URL: https://www.codechef.com/problems/AGEING
// PROBLEM DIFFICULTY RATTING: 299
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &x);
        printf("%d\n", 10+(x-20));
    }
    
	return 0;
}



