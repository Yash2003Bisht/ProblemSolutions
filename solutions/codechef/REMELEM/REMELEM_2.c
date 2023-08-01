// DATE: 01/08/2023, 07:39:20
// PROBLEM NAME: Remove Element
// PROBLEM URL: https://www.codechef.com/problems/REMELEM
// PROBLEM DIFFICULTY RATTING: 1415
// STATUS: accepted
// TIME: 0.04
// MEMORY: 2.3M

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
    int t, n, k;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &k);
        int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        mergeSort(a, 0, n-1);

        if (a[0]+a[n-1] <= k || n == 1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



