// DATE: 17/03/2023, 07:54:34
// PROBLEM NAME: Andrew and the Meatballs
// PROBLEM URL: https://www.codechef.com/problems/AMMEAT
// PROBLEM DIFFICULTY RATTING: 1275
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>
#include <stdlib.h>

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
    int t, n, counter;
    long long int m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &m);
        long long int p[n], count = 0;
        
        for (int i=0; i<n; i++)
            scanf("%lld", &p[i]);
        
        mergeSort(p, 0, n-1);
        counter = 0;
        
        for (int i=n-1; i>=0; i--){
            count += p[i];
            counter++;

            if (count >= m)
                break;

        }
        
        if (count >= m)
            printf("%d\n", counter);
        else
            printf("-1\n");
        
    }
    
	return 0;
}



