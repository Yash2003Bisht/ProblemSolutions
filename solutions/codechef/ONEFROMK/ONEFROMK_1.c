// DATE: 20/07/2023, 08:07:38
// PROBLEM NAME: Exclusion-Inclusion
// PROBLEM URL: https://www.codechef.com/problems/ONEFROMK
// PROBLEM DIFFICULTY RATTING: 1307
// STATUS: accepted
// TIME: 0.07
// MEMORY: 5.3M

#include <stdio.h>
#define lld long long int

void merge(lld arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    lld L[n1], R[n2];
 
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
 

void mergeSort(lld arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

lld sum(lld *arr, int size){
    lld total = 0;
    
    for (int i=0; i<size; i++)
        total += arr[i];

    return total;

}

int main(void) {
    int t, n;
    lld arr_sum;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        lld arr[n];

        for (int i=0; i<n; i++)
            scanf("%lld", &arr[i]);

        mergeSort(arr, 0, n-1);
        arr_sum = sum(arr, n);

        printf("%lld ", arr_sum);

        for (int i=0; i<n-1; i++){
            arr_sum -= arr[i];
            printf("%lld ", arr_sum);
        }

        printf("\n");

    }

	return 0;
}


