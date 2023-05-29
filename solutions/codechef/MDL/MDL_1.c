// DATE: 29/05/2023, 07:42:04
// PROBLEM NAME: Medel
// PROBLEM URL: https://www.codechef.com/problems/MDL
// PROBLEM DIFFICULTY RATTING: 1139
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>
#include <limits.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, minimum, maximum, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d",  &n);
        int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        minimum = INT_MAX, maximum = a[0], count = 0;

        for (int i=1; i<n; i++){
            if (a[i] > maximum){
                minimum = min(minimum, maximum);
                maximum = a[i];
            }
            else if (minimum > a[i])
                minimum = a[i];
        }
        
        for (int i=0; i<n; i++){
            if (minimum == a[i])
                printf("%d ", minimum);
            else if (maximum == a[i])
                printf("%d ", maximum);
            
            if (count == 2)
                break;
            
        }

        printf("\n");

    }
    
	return 0;
}



