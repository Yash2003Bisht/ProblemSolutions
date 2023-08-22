// DATE: 22/08/2023, 07:11:09
// PROBLEM NAME: Chef and Walking on the rectangle 
// PROBLEM URL: https://www.codechef.com/problems/CHRECT
// PROBLEM DIFFICULTY RATTING: 1435
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, m, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &k);
        
        if ((n == 1 && m == 1) || (n == 1 && m == 2 || m == 1 && n == 2))
            printf("0\n");
        else if (n == 1 || m == 1)
            printf("%d\n", k);
        else if (k%2 == 0)
            printf("%d\n", k/2);
        else
            printf("%d\n", k/2 + 1);
        
    }
    
	return 0;
}



