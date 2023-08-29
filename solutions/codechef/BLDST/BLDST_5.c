// DATE: 28/08/2023, 08:06:32
// PROBLEM NAME: Ball Distribution
// PROBLEM URL: https://www.codechef.com/problems/BLDST
// PROBLEM DIFFICULTY RATTING: 1442
// STATUS: accepted
// TIME: 0.02
// MEMORY: 2.6M

#include <stdio.h>

int main(void) {
    int t, n, m, total;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);
        int arr[m];
        total = 0;

        for (int i=0; i<m; i++){
            scanf("%d", &arr[i]);
        }
   
        for (int i=0; i<m; i++)
            total += arr[i];

        total = n - (n*m - total);

        if (total > 0)
            printf("%d\n", total);
        else
            printf("0\n");

    }
    
	return 0;
}



