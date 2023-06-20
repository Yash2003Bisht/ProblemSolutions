// DATE: 20/06/2023, 07:46:56
// PROBLEM NAME: Kill them with your success
// PROBLEM URL: https://www.codechef.com/problems/PROC18B
// PROBLEM DIFFICULTY RATTING: 1367
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
 

void mergeSort(long long int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int main(void) {
    int t, n;
    double ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int arr[n];

        for (int i=0; i<n; i++)
            scanf("%lld", &arr[i]);

        mergeSort(arr, 0, n-1);
        ans = arr[n-1];
        
        for (int i=n-2; i>=0; i--)
            ans = (ans + arr[i]) / 2;
        
        printf("%0.10f\n", ans);

    }
    
	return 0;
}


