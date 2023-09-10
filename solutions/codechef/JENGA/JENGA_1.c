// DATE: 09/09/2023, 10:13:16
// PROBLEM NAME: Jenga Night
// PROBLEM URL: https://www.codechef.com/problems/JENGA
// PROBLEM DIFFICULTY RATTING: 613
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while (t--){
        scanf("%d%d", &n, &x);
        if (x % n == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}



