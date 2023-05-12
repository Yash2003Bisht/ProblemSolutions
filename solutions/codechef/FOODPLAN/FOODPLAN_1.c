// DATE: 12/05/2023, 06:04:47
// PROBLEM NAME: Online or Offline
// PROBLEM URL: https://www.codechef.com/problems/FOODPLAN
// PROBLEM DIFFICULTY RATTING: 713
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        
        if (n - n*0.1 < m)
            printf("ONLINE\n");
        else if (n - n*0.1 > m)
            printf("DINING\n");
        else
            printf("EITHER\n");
        
    }
    
	return 0;
}



