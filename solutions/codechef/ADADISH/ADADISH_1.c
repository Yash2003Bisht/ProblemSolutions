// DATE: 03/02/2023, 07:37:43
// PROBLEM NAME: Ada and Dishes
// PROBLEM URL: https://www.codechef.com/problems/ADADISH
// PROBLEM DIFFICULTY RATTING: 1237
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>
#define max(a,b)(a>b?a:b)

int sortlogic (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}


int main(void) {
    int t, n, t1, t2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int c[n];

        for (int i=0; i<n; i++) scanf("%d", &c[i]);

        // sort the array
        qsort(c, n, sizeof(int), sortlogic);
        
        t1 = 0, t2 = 0;
        
        for (int i=0; i<n; i++){
            if (t1 < t2) t1 += c[i];
            else t2 += c[i];
        }
        
        printf("%d\n", max(t1, t2));

    }
    
	return 0;
}



