// DATE: 08/05/2023, 05:46:37
// PROBLEM NAME: Finding Shoes
// PROBLEM URL: https://www.codechef.com/problems/FINDSHOES
// PROBLEM DIFFICULTY RATTING: 646
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, m, total_shoes;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        total_shoes =  n*2;
        
        if (n <= m)
            printf("%d\n", n);
        else
            printf("%d\n", total_shoes - m);

    }
    
	return 0;
}



