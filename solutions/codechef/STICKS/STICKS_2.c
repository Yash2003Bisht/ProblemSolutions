// DATE: 27/02/2023, 08:25:50
// PROBLEM NAME: Sticks
// PROBLEM URL: https://www.codechef.com/problems/STICKS
// PROBLEM DIFFICULTY RATTING: 1261
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b){
  return ( *(int*)b - *( int*)a );
}

int main(void) {
    int t, n, count, area;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        qsort(a, n, sizeof(int), compare);
        count = 0, area = 1;

        for (int i=0; i<n-1; i++){
            if (a[i] == a[i+1]){
                area *= a[i];
                i++;
                count++;
            }
            
            if (count == 2) break;
        }
        
        if (count == 2) printf("%d\n", area);
        else printf("-1\n");

        
    }
    
	return 0;
}


