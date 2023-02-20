// DATE: 21/11/2022, 06:42:38
// PROBLEM NAME: Chef and Serves
// PROBLEM URL: https://www.codechef.com/problems/CHSERVE
// PROBLEM DIFFICULTY RATTING: 1101
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, p1, p2, k;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &p1, &p2, &k);


        if ( ( (p1+p2) / k ) % 2 != 0) printf("COOK\n");
        else printf("CHEF\n");

    }

	return 0;
}



