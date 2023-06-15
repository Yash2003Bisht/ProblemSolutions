// DATE: 15/06/2023, 08:59:21
// PROBLEM NAME: 7 Rings
// PROBLEM URL: https://www.codechef.com/problems/SEVENRINGS
// PROBLEM DIFFICULTY RATTING: 568
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, x, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        total = n*x;
        
        if (total >= 10000 && total <= 99999)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



