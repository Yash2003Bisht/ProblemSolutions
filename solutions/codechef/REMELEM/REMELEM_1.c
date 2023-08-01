// DATE: 01/08/2023, 07:46:12
// PROBLEM NAME: Remove Element
// PROBLEM URL: https://www.codechef.com/problems/REMELEM
// PROBLEM DIFFICULTY RATTING: 1415
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.9M

#include <stdio.h>


int main(void) {
    int t, n, k, min, max;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &k);
        int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        min = a[0], max = a[0];
        
        if (n > 1){
            for (int i=1; i<n; i++){
                if (max < a[i])
                    max = a[i];
                else if (min > a[i])
                    min = a[i];
            }
        }

        if (min + max <= k || n == 1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



