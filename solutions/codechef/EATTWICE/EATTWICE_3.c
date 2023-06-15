// DATE: 15/06/2023, 08:49:42
// PROBLEM NAME: Eat Twice
// PROBLEM URL: https://www.codechef.com/problems/EATTWICE
// PROBLEM DIFFICULTY RATTING: 1370
// STATUS: accepted
// TIME: 0.24
// MEMORY: 5.3M

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
    int t, n, m, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        long long int dish, taste, counter[m];

        for (int i=0; i<m; i++)
            counter[i] = 0;

        for (int i=0; i<n; i++){
            scanf("%lld%lld", &dish, &taste);
            counter[dish - 1] = max(counter[dish - 1], taste);
        }
        
        mergeSort(counter, 0, m-1);
        printf("%lld\n", counter[m-2] + counter[m-1]);
        
    }
    
	return 0;
}



