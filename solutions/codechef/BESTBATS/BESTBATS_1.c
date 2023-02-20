// DATE: 18/01/2023, 08:20:59
// PROBLEM NAME: Top Batsmen
// PROBLEM URL: https://www.codechef.com/problems/BESTBATS
// PROBLEM DIFFICULTY RATTING: 1228
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int fact(int n){
    int value = 1;
    
    for (int i=1; i<=n; i++){
        value *= i;
    }
    
    return value;
    
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
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
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int main(void) {
    int t, n[11], k, count, all_count, min_value;
    scanf("%d", &t);

    while(t--){
        for (int i=0; i<11; i++)
            scanf("%d", &n[i]);
        
        scanf("%d", &k);

        mergeSort(n, 0, 11 - 1);
        min_value = n[11-k], all_count = 0, count = 0;
        
        for (int i=0; i<11; i++){
            if (min_value == n[i]) all_count++;
            if (i >= 11-k && min_value == n[i]) count++;
        }
        
        // n! / (k! * (n – k)!)
        int ans = fact(all_count) / (fact(count) * fact(all_count - count));
        printf("%d\n", ans);
        
    }
	return 0;
}



