// DATE: 09/08/2023, 07:45:04
// PROBLEM NAME: Decreasing Srrnmieeda
// PROBLEM URL: https://www.codechef.com/problems/DECREM
// PROBLEM DIFFICULTY RATTING: 1423
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, l, r;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &l, &r);
        
        if (r < 2*l)
            printf("%d\n", r);
        else
            printf("-1\n");
        
    }
    
	return 0;
}


