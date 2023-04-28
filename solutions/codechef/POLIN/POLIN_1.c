// DATE: 28/04/2023, 08:28:05
// PROBLEM NAME: Points and Lines
// PROBLEM URL: https://www.codechef.com/problems/POLIN
// PROBLEM DIFFICULTY RATTING: 1296
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b){
  return ( *(int*)a - *( int*)b );
}

int main(void) {
    int t, n, x, y, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;
        int x_axis[n], y_axis[n];
        
        for (int i=0; i<n; i++){
            scanf("%d%d", &x, &y);
            x_axis[i] = x;
            y_axis[i] = y;
        }
        
        qsort(x_axis, n, sizeof(int), compare);
        qsort(y_axis, n, sizeof(int), compare);
        
        for (int i=0; i<n-1; i++){
            // x axis
            if (x_axis[i] != x_axis[i+1])
                count++;
            
            // y axis
            if (y_axis[i] != y_axis[i+1])
                count++;
        }

        printf("%d\n", count+2);
    }
    
	return 0;
}



