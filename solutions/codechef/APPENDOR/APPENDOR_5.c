// DATE: 12/01/2023, 07:15:48
// PROBLEM NAME: Append for OR
// PROBLEM URL: https://www.codechef.com/problems/APPENDOR
// PROBLEM DIFFICULTY RATTING: 1201
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, y, a, total;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &y);
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            total |= a;
        }
        
        a = y - total;
        total = total|a;
        
        if (a >= 0 && total == y) printf("%d\n", a);
        else printf("-1\n");
        
    }
    
	return 0;
}



