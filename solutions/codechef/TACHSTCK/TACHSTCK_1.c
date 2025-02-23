// DATE: 22/04/2023, 12:15:23
// PROBLEM NAME: Chopsticks
// PROBLEM URL: https://www.codechef.com/problems/TACHSTCK
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

void merge(long long int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    long long int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
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

void mergeSort(long long int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}


int main(void) {
    int n;
    long long int d, count;
    scanf("%d%lld", &n, &d);
    
    long long int arr[n];
    
    for (int i=0; i<n; i++)
        scanf("%lld", &arr[i]);
    
    mergeSort(arr, 0, n-1);
    count = 0;
    
    for (int i=0; i<n-1; i++){
        if (arr[i+1] - arr[i] <= d){
            count++;
            i++;
        }
    }
    
    printf("%lld\n", count);
    
	return 0;
}



