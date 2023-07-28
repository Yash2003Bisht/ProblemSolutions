// DATE: 28/07/2023, 07:35:11
// PROBLEM NAME: B - Valentine Couples
// PROBLEM URL: https://www.codechef.com/problems/VCOUPLE
// PROBLEM DIFFICULTY RATTING: 1412
// STATUS: runtime error(SIGSEGV)
// TIME: 0.00
// MEMORY: 1.8M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

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
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], b[n], total = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        for (int i=0; i<n; i++)
            scanf("%d", &b[i]);
        
        mergeSort(a, 0, n-1);
        mergeSort(b, 0, n-1);
        
        for (int i=0; i<n; i++)
            total = max(total, a[i]+b[n-1-i]);
        
        printf("%d\n", total);
        
    }
    
	return 0;
}



