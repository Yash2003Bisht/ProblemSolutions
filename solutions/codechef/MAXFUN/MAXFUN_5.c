// DATE: 15/04/2023, 08:34:27
// PROBLEM NAME: Maximise Function
// PROBLEM URL: https://www.codechef.com/problems/MAXFUN
// PROBLEM DIFFICULTY RATTING: 1301
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.2M

#include <stdio.h>
#include <math.h>
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
    int t, n;
    long long int ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        
        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        
        mergeSort(arr, 0, n-1);
        ans = arr[n-1] - arr[0];

        printf("%lld\n", ans*2);

    }
    
	return 0;
}



