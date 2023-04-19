// DATE: 19/04/2023, 07:52:33
// PROBLEM NAME: Maximum Weight Difference
// PROBLEM URL: https://www.codechef.com/problems/MAXDIFF
// PROBLEM DIFFICULTY RATTING: 1308
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0, j = 0, k = l;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int main(void) {
    int t, n, k, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int w[n];
        count1 = 0, count2 = 0;
        
        for (int i=0; i<n; i++)
            scanf("%d", &w[i]);
            
        mergeSort(w, 0, n-1);
        
        if (k > n-k)
            k = n-k;
        
        for (int i=0; i<n; i++){
            if (i < k)
                count1 += w[i];
            else
                count2 += w[i];
        }
        
        printf("%d\n", count2 - count1);
        
    }
    
	return 0;
}



