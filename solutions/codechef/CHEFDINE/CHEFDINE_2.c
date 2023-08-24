// DATE: 24/08/2023, 08:19:02
// PROBLEM NAME: Akash and Dinner
// PROBLEM URL: https://www.codechef.com/problems/CHEFDINE
// PROBLEM DIFFICULTY RATTING: 1438
// STATUS: wrong answer
// TIME: 0.02
// MEMORY: 3.1M

#include <stdbool.h>
#include <stdio.h>
#define lld long long int

void countingSort(int arr[], int a[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        a[count[(arr[i] / exp) % 10] - 1] = a[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(int b[], int a[], int n) {
    int max = b[0];
    for (int i = 1; i < n; i++) {
        if (b[i] > max) {
            max = b[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(b, a, n, exp);
    }
}

int main(void) {
    int t, n, k, temp;
    lld cooking_time;
    bool swapped;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int a[n], b[n], counter[100000] = {0};
        cooking_time = 0;

        for (int i=0; i<n*2; i++){
            if (i<n)
                scanf("%d", &a[i]);
            else
                scanf("%d", &b[i-n]);
        }

        radixSort(b, a, n);

        for (int i=0; i<n && k > 0; i++){
            if (!counter[a[i]-1]){
                cooking_time += b[i];
                counter[a[i]-1] = 1;
                k--;
            }
        }

        if (!k)
            printf("%lld\n", cooking_time);
        else
            printf("-1\n");
    }
    
	return 0;
}



