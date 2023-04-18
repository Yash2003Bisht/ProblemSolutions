// DATE: 17/04/2023, 08:55:05
// PROBLEM NAME: The Ball And Cups
// PROBLEM URL: https://www.codechef.com/problems/TAVISUAL
// PROBLEM DIFFICULTY RATTING: 1306
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, c, q, l, r, dff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &c, &q);
        
        for (int i=0; i<q; i++){
            scanf("%d%d", &l, &r);
            if (l <= c && r >= c){
                dff = c - l;
                c = r - dff;
            }
        }
        
        printf("%d\n", c);
        
    }
    
	return 0;
}



