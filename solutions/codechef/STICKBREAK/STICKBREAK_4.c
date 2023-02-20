// DATE: 12/12/2022, 06:04:02
// PROBLEM NAME: Stick Break
// PROBLEM URL: https://www.codechef.com/problems/STICKBREAK
// PROBLEM DIFFICULTY RATTING: 1123
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, k, l;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &k, &l);
        if (k%l == 0) printf("0\n");
        else printf("1\n");
    }
    
	return 0;
}



