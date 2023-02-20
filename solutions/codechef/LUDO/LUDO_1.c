// DATE: 28/01/2023, 07:07:51
// PROBLEM NAME: Chef Plays Ludo
// PROBLEM URL: https://www.codechef.com/problems/LUDO
// PROBLEM DIFFICULTY RATTING: 260
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        if (x == 6) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}



