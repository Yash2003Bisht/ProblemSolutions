// QUESTION URL: https://www.codechef.com/problems/APPENDOR
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
        
        if (total == y) printf("%d\n", a);
        else printf("-1\n");
        
    }
    
	return 0;
}



