// QUESTION URL: https://www.codechef.com/problems/COPS
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, m, x, y, houses_search, cop_m, temp1, temp2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &m, &x, &y);
        houses_search = x*y;
        int houses[100] = {0};

        for (int i=0; i<m; i++){
            scanf("%d", &cop_m);
            temp1 = cop_m - houses_search > 0 ? cop_m - houses_search : 1;
            temp2 = cop_m + houses_search > 100 ? 100 : cop_m + houses_search;

            for (int j=temp1-1; j<temp2; j++) houses[j] = 1;

        }

        temp1 = 0;
        for (int i=0; i<100; i++){
            if (houses[i] == 0) temp1++;
        }

        printf("%d\n", temp1);
        
    }
    
	return 0;
}



