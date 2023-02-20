// DATE: 03/02/2023, 07:33:05
// PROBLEM NAME: Ada and Dishes
// PROBLEM URL: https://www.codechef.com/problems/ADADISH
// PROBLEM DIFFICULTY RATTING: 1237
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <stdlib.h>


int sortlogic (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}


int main(void) {
    int t, n, total_min, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int c[n];

        for (int i=0; i<n; i++) scanf("%d", &c[i]);

        // sort the array
        qsort(c, n, sizeof(int), sortlogic);
        
        total_min = c[0], temp = c[0];
        
        for (int i=1; i<n; i++){
            if (temp >= c[i]) temp -= c[i];
            else {
                temp = c[i] - temp;
                total_min += temp;
            }
        }
        
        printf("%d\n", total_min);

    }
    
	return 0;
}



