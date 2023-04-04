// DATE: 04/04/2023, 07:54:37
// PROBLEM NAME: Help Voldemort
// PROBLEM URL: https://www.codechef.com/problems/HELPVOLD
// PROBLEM DIFFICULTY RATTING: 1302
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
    int n;
    scanf("%d", &n);
    int e[n];
    long long int ans;

    for (int i=0; i<n; i++)
        scanf("%d", &e[i]);
    
    mergeSort(e, 0, n-1);
    ans = 0;

    for (int i=0; i<n-1; i++)
        ans += e[i]*e[i+1];

    printf("%lld", ans);


	return 0;
}



