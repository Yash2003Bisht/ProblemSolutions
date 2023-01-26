// QUESTION URL: https://www.codechef.com/problems/ARRSWAP
// STATUS: accepted
// TIME: 0.10
// MEMORY: 5.4M

#include <stdio.h>
#define MIN(a, b)(a>b ? b : a)

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
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
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}


int main(void) {
    int t, n, value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n*2];
        value = 1000000001;
        
        for (int i=0; i<n*2; i++)
            scanf("%d", &a[i]);
            
        mergeSort(a, 0, (n*2)-1);
        
        for (int i=0; i<n+1; i++)
            value = MIN(value, a[n+i-1] - a[i]);
            
        printf("%d\n", value);
    }
	return 0;
}



