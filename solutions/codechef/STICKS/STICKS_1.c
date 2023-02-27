// DATE: 27/02/2023, 08:28:08
// PROBLEM NAME: Sticks
// PROBLEM URL: https://www.codechef.com/problems/STICKS
// PROBLEM DIFFICULTY RATTING: 1261
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
    int t, n, count, area;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
            
        
        mergeSort(a, 0, n-1);
        count = 0, area = 1;

        for (int i=n-1; i>=1; i--){
            if (a[i] == a[i-1]){
                area *= a[i];
                count++;
                i--;
            }
            
            if (count == 2) break;
        }
        
        if (count == 2) printf("%d\n", area);
        else printf("-1\n");

        
    }
    
	return 0;
}



