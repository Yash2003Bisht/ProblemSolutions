// DATE: 06/06/2023, 08:27:01
// PROBLEM NAME: Gift Shop and Coupon
// PROBLEM URL: https://www.codechef.com/problems/GFTSHP
// PROBLEM DIFFICULTY RATTING: 1364
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.2M

#include <stdio.h>

void quick(int a[], int start, int end){
    int p;
    if (start < end){
        p = partition(a, start, end);
        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}

int partition (int a[], int start, int end){
    int pivot = a[end], i = (start - 1), t;

    for (int j = start; j <= end - 1; j++){
        if (a[j] < pivot){  
            i++;
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    t = a[i+1];
    a[i+1] = a[end];
    a[end] = t;

    return (i + 1);
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
        
        quick(arr, 0, n-1);

        for (i=0; i<n; i++){
            if (total + arr[i] < k)
                total += arr[i];
            else
                break;
        }

        if (total + (arr[i]+1)/2 > k)
            i--;

        printf("%d\n", i == n ? i : i+1);

    }
    
	return 0;
}



