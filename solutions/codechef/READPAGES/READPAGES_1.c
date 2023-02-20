// DATE: 02/02/2023, 08:00:28
// PROBLEM NAME: Read Pages
// PROBLEM URL: https://www.codechef.com/problems/READPAGES
// PROBLEM DIFFICULTY RATTING: 343
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x, y;

    scanf("%d", &t);

    while(t--){

        scanf("%d%d%d", &n, &x, &y);
    
        if (x*y >= n) printf("YES\n");
        else printf("NO\n");
    

    }
	return 0;
}



