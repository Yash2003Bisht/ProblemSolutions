// DATE: 24/08/2023, 08:14:46
// PROBLEM NAME: Akash and Dinner
// PROBLEM URL: https://www.codechef.com/problems/CHEFDINE
// PROBLEM DIFFICULTY RATTING: 1438
// STATUS: accepted
// TIME: 0.02
// MEMORY: 3.3M

#include <stdbool.h>
#include <stdio.h>
#define lld long long int
  
void merge(int b[], int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    int aL[n1], aR[n2]; // Corresponding arrays for 'a'

    for (int i = 0; i < n1; i++) {
        L[i] = b[left + i];
        aL[i] = a[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = b[mid + 1 + j];
        aR[j] = a[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            b[k] = L[i];
            a[k] = aL[i];
            i++;
        } else {
            b[k] = R[j];
            a[k] = aR[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        b[k] = L[i];
        a[k] = aL[i];
        i++;
        k++;
    }

    while (j < n2) {
        b[k] = R[j];
        a[k] = aR[j];
        j++;
        k++;
    }
}

void mergeSort(int b[], int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(b, a, left, mid);
        mergeSort(b, a, mid + 1, right);

        merge(b, a, left, mid, right);
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

        mergeSort(b, a, 0, n-1);

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



