// QUESTION URL: https://www.codechef.com/problems/EQPAIR
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.3M

#include <stdio.h>

int fact(int n){
    int value = 1;
    
    for (int i=1; i<=n; i++){
        value *= i;
    }
    
    return value;
    
}

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
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n], count = 0, counter = 1;
        
        for (int i=0; i<n; i++) scanf("%lld", &a[i]);
        
        mergeSort(a, 0, n-1);
        
        for (int i=0; i<n-1; i++){
            if (a[i] == a[i+1]) counter++;
            else{
                count = count + (counter*(counter-1))/2;
                counter = 1;
            }
        }

        if (counter > 1)
            count = count + (counter*(counter-1))/2;

        printf("%lld\n", count);
        
    }
    
	return 0;
}



