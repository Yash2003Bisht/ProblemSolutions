// DATE: 13/06/2023, 07:43:41
// PROBLEM NAME: Even Equal Odd
// PROBLEM URL: https://www.codechef.com/problems/EVEQODD
// PROBLEM DIFFICULTY RATTING: 1363
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

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
int main(){
    int t, n, even, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n*2], size = n*2;
        even = 0;

        for (int i=0; i<size; i++){
            scanf("%d", &arr[i]);
            if (arr[i]%2 == 0)
                even++;
        }
        
        if (even > n){
            int counter[even], j = 0;
            
            for (int i=0; i<size; i++){
                count = 0;
                if (arr[i]%2 == 0){
                    while(arr[i]%2 == 0){
                        arr[i] /= 2;
                        count++;
                    }
                    counter[j] = count;
                    j++;
                }
            }
            
            mergeSort(counter, 0, even - 1);
            count = 0;

            for (int i=0; i<even - n; i++)
                count += counter[i];

            printf("%d\n", count);

        } else
            printf("%d\n", n - even);

    }
    
    return 0;
}


