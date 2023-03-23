// DATE: 23/03/2023, 07:46:32
// PROBLEM NAME: Even Splits
// PROBLEM URL: https://www.codechef.com/problems/EVENSPLIT
// PROBLEM DIFFICULTY RATTING: 1282
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

void merge(char arr[], int l, int m, int r){
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

void mergeSort(char arr[], int l, int r){
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
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        
        if (n == 2)
            printf("%s\n", s);
        else {
            mergeSort(s, 0, n-1);
            printf("%s\n", s);
        }
    }
    
	return 0;
}



