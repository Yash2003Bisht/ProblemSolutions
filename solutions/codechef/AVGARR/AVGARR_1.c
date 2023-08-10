// DATE: 10/08/2023, 08:40:32
// PROBLEM NAME: Average Array
// PROBLEM URL: https://www.codechef.com/problems/AVGARR
// PROBLEM DIFFICULTY RATTING: 1424
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);

        for (int i=x-n/2; i<x; i++)
            printf("%d ", i);

        for (int i=x+1; i<=x+n/2; i++)
            printf("%d ", i);
            
        if (n%2 != 0)
            printf("%d ", x);

        printf("\n");
                
    }
    
	return 0;
}



