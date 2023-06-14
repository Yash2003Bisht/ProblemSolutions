// DATE: 14/06/2023, 07:54:48
// PROBLEM NAME: Chocolate Monger
// PROBLEM URL: https://www.codechef.com/problems/CM164364
// PROBLEM DIFFICULTY RATTING: 1369
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

void swap(long long int* a, long long int* b){
    long long int t = *a;
    *a = *b;
    *b = t;
}

int partition(long long int arr[], int low, int high){
    int pivot = arr[high];

    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(long long int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main(void) {
    int t, x, n, i, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        long long int arr[n];
        for (i=0; i<n; i++)
            scanf("%lld", &arr[i]);
        
        quickSort(arr, 0, n-1);

        i = 0, count = 1;
        for (int i=0; i<n-1; i++){
            if (arr[i] != arr[i+1])
                count++;
        }
        
        if (n - x > count)
            printf("%d\n", count);
        else
            printf("%d\n", n - x);

    }
    
	return 0;
}



