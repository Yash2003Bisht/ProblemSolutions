// DATE: 14/01/2023, 07:33:39
// PROBLEM NAME: Chef and Party
// PROBLEM URL: https://www.codechef.com/problems/CHFPARTY
// PROBLEM DIFFICULTY RATTING: 1223
// STATUS: accepted
// TIME: 0.17
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int sortlogic (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], total = 0;
        
        for (int i=0; i<n; i++) scanf("%d", &a[i]);

        // sort the array
        qsort(a, n, sizeof(int), sortlogic);
        
        for (int i=0; i<n; i++){
            if (total >= a[i]) total++;
            else break;
        }
        
        printf("%d\n", total);

    }
    
	return 0;
}



