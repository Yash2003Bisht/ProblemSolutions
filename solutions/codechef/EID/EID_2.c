// DATE: 20/02/2023, 04:58:20
// PROBLEM NAME: Chef and Eid
// PROBLEM URL: https://www.codechef.com/problems/EID
// PROBLEM DIFFICULTY RATTING: 1135
// STATUS: accepted
// TIME: 0.10
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>

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
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], min_diff;
        
        for (int i=0 ;i<n; i++)
            scanf("%d", &a[i]);
        
        mergeSort(a, 0, n-1);
        min_diff = INT_MAX;
        
        for (int i=0; i<n-1; i++){
            if (a[i+1] - a[i] < min_diff)
                min_diff = a[i+1] - a[i];
        }
        
        printf("%d\n", min_diff);

        
    }
    
	return 0;
}



