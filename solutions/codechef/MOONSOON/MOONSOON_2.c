// DATE: 28/10/2023, 09:02:16
// PROBLEM NAME: EVacuate to Moon
// PROBLEM URL: https://www.codechef.com/problems/MOONSOON
// PROBLEM DIFFICULTY RATTING: 1479
// STATUS: accepted
// TIME: 0.02
// MEMORY: 3.7M

#include <stdio.h>
#define lld long long int
#define min(a,b)(a>b?b:a)

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

int main(void) {
    int t, n, m, h, i, start;
    lld total;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &m, &h);
        total = 0;

        // cap - capacity
        lld cars_cap[n], power_outlets_cap[m];

        for (i=0; i<n; i++)
            scanf("%lld", &cars_cap[i]);

        for (i=0; i<m; i++)
            scanf("%lld", &power_outlets_cap[i]);

        mergeSort(cars_cap, 0, n-1);
        mergeSort(power_outlets_cap, 0, m-1);

        start = min(n, m);

        for (int i=0; i<start; i++)
            total += min(cars_cap[n - i - 1], power_outlets_cap[m - i - 1]*h);

        printf("%lld\n", total);

    }
    
	return 0;
}



