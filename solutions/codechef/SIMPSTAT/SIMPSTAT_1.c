// DATE: 10/01/2023, 08:43:31
// PROBLEM NAME: Simple Statistics
// PROBLEM URL: https://www.codechef.com/problems/SIMPSTAT
// PROBLEM DIFFICULTY RATTING: 1222
// STATUS: accepted
// TIME: 0.16
// MEMORY: 5.2M

#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
 
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int N, int i){
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
 
    if (left < N && arr[left] > arr[largest]) largest = left;
    if (right < N && arr[right] > arr[largest]) largest = right;
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }

}
 
void heapSort(int arr[], int N){
    for (int i = N / 2 - 1; i >= 0; i--) heapify(arr, N, i);

    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main(void) {
    int t, n, k;
    double sum, avg;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &k);
        int arr[n];
        sum = 0, avg = 0;

        for (int i=0; i<n; i++) scanf("%d", &arr[i]);
        heapSort(arr, n);

        for (int i=k; i<n-k; i++) sum += arr[i];
        avg = sum / (n-2*k);

        printf("%.6lf\n", avg);

    }
	return 0;
}



