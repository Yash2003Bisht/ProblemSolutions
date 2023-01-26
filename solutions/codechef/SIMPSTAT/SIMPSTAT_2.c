// QUESTION URL: https://www.codechef.com/problems/SIMPSTAT
// STATUS: accepted
// TIME: 0.19
// MEMORY: 5.3M

#include <stdio.h>

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
    int t, n, k;
    double sum, avg;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &k);
        int arr[n];
        sum = 0, avg = 0;

        for (int i=0; i<n; i++) scanf("%d", &arr[i]);
        mergeSort(arr, 0, n-1);

        for (int i=k; i<n-k; i++) sum += arr[i];
        avg = sum / (n-2*k);

        printf("%.6lf\n", avg);

    }
	return 0;
}



