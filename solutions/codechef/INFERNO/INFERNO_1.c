// DATE: 06/05/2023, 04:50:27
// PROBLEM NAME: Infernos
// PROBLEM URL: https://www.codechef.com/problems/INFERNO
// PROBLEM DIFFICULTY RATTING: 1162
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>
#define max(a, b)(a>b?a:b)
#define min(a, b)(a>b?b:a)

int main(void) {
    int t, n, x, a, count, max_health;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        count = 0, max_health = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            count += a%x == 0 ? a/x : (a/x)+1;
            max_health = max(max_health, a);
        }

        printf("%d\n", min(max_health, count));

    }
    
	return 0;
}



