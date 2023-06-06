// DATE: 06/06/2023, 08:20:43
// PROBLEM NAME: Gift Shop and Coupon
// PROBLEM URL: https://www.codechef.com/problems/GFTSHP
// PROBLEM DIFFICULTY RATTING: 1364
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.2M

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
    int t, n, k, i;
    long long int total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int arr[n];
        total = 0;
        
        for (i=0; i<n; i++)
            scanf("%d", &arr[i]);
        
        mergeSort(arr, 0, n-1);

        for (i=0; i<n; i++){
            
            if (total + arr[i] < k)
                total += arr[i];
            else if (total + arr[i] == k)
                break;
            else{
                if (total + (arr[i]+1)/2 > k)
                    i--;
                break;
            }

        }
        
        printf("%d\n", i == n ? i : i+1);

    }
    
	return 0;
}



