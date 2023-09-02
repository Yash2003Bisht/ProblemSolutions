// DATE: 02/09/2023, 07:42:24
// PROBLEM NAME: Maximum Deliciousness
// PROBLEM URL: https://www.codechef.com/problems/KDELI
// PROBLEM DIFFICULTY RATTING: 1263
// STATUS: accepted
// TIME: 0.03
// MEMORY: 3M

#include <stdio.h>
#define lld long long int

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
    int t, n, k, l;
    lld total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &k, &l);
        int a[n];
        total = 0;
        
        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        mergeSort(a, 0, n-1);

        for (int i=l-1; i<n; i += k)
            total += a[n-i-1];

        printf("%lld\n", total);

    }
    
	return 0;
}



