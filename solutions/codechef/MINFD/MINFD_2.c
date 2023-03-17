// DATE: 17/03/2023, 07:31:31
// PROBLEM NAME: Chef and Fixed Deposits
// PROBLEM URL: https://www.codechef.com/problems/MINFD
// PROBLEM DIFFICULTY RATTING: 1271
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

int main(void) {
    
    int t, n, x, count, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        int a[n];
        
        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        qsort(a, n, sizeof(int), cmpfunc);
        count = 0, counter = 0;
        
        for (int i=n-1; i>=0; i--){
            count += a[i];
            counter++;

            if (count >= x)
                break;
        }
        
        if (count >= x)
            printf("%d\n", counter);
        else
            printf("-1\n");
        
    }
    
	return 0;
}


