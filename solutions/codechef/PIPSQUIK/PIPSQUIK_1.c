// DATE: 12/08/2023, 07:44:09
// PROBLEM NAME: Full Barrier Alchemist
// PROBLEM URL: https://www.codechef.com/problems/PIPSQUIK
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, h, y1, y2, l, b_passed;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d", &n, &h, &y1, &y2, &l);
        int b_type[n], x[n];
        b_passed = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &b_type[i]);
            scanf("%d", &x[i]);
        }
        
        for (int i=0; i<n && l>0; i++){
            if ((b_type[i] == 1 && h-y1 > x[i]) || (b_type[i] == 2 && y2 < x[i]))
                l--;
            b_passed++;
        }
        
        if (!l)
            b_passed--;
        
        printf("%d\n", b_passed);
            
        
    }
    
	return 0;
}



