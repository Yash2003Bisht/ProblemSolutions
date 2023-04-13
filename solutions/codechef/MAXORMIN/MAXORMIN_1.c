// DATE: 13/04/2023, 08:22:59
// PROBLEM NAME: Maximum OR Minimum
// PROBLEM URL: https://www.codechef.com/problems/MAXORMIN
// PROBLEM DIFFICULTY RATTING: 1313
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a, count_1, count_0;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count_1 = 0, count_0 = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a == 1)
                count_1++;
            else
                count_0++;
        }
        
        if (count_1 >= count_0)
            printf("1\n");
        else
            printf("0\n");

    }
    
	return 0;
}



