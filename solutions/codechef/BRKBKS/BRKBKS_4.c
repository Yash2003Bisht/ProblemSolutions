// DATE: 08/02/2023, 08:10:06
// PROBLEM NAME: Breaking Bricks
// PROBLEM URL: https://www.codechef.com/problems/BRKBKS
// PROBLEM DIFFICULTY RATTING: 1247
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, s, w1, w2, w3;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &s, &w1, &w2, &w3);
        
        if (s >= (w1+w2+w2)) printf("1\n");
        else if (s >= (w1+w2) || s >= (w2+w3)) printf("2\n");
        else printf("3\n");

    }
    
	return 0;
}



