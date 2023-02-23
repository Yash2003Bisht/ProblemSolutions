// DATE: 23/02/2023, 07:23:57
// PROBLEM NAME: Little Chef and Sums
// PROBLEM URL: https://www.codechef.com/problems/CHEFSUM
// PROBLEM DIFFICULTY RATTING: 1252
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>

int sum_arr(int arr[], int start, int end){
    int total = 0;

    for (int i=start; i<end; i++){
        total += arr[i];
    }
    
    return total;
    
}

int main(void) {
    int t, n, idx, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], b[n], c[n];
        total = INT_MAX;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        for (int i=0; i<n; i++){
            b[i] = sum_arr(a, 0, i+1);
            c[i] = sum_arr(a, i, n);
        }

        for (int i=0; i<n; i++){
            if (b[i] + c[i] < total){
                total = b[i] + c[i];
                idx = i+1;
            }
        }
        
        printf("%d\n", idx);

    }
    
	return 0;
}



