// DATE: 02/10/2022, 03:56:22
// PROBLEM NAME: Reach the Target
// PROBLEM URL: https://www.codechef.com/problems/REACHTARGET
// PROBLEM DIFFICULTY RATTING: 281
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &x,&y);
        printf("%d\n", x-y);
    }
	return 0;
}



