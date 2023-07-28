// DATE: 28/07/2023, 09:10:27
// PROBLEM NAME: Plusle and Minun on Array
// PROBLEM URL: https://www.codechef.com/problems/PMA
// PROBLEM DIFFICULTY RATTING: 1412
// STATUS: accepted
// TIME: 0.04
// MEMORY: 2.2M

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#define min(a, b)(a>b?b:a)
#define max(a, b)(a>b?a:b)
#define lld long long int

lld get_max(lld *arr, int size){
    lld max_value = 0;
    
    for (int i=0; i<size; i++)
        max_value = max(max_value, arr[i]);
    
    return max_value;
    
}

lld get_min(lld *arr, int size){
    lld min_value = INT_MAX;
    
    for (int i=0; i<size; i++)
        min_value = min(min_value, arr[i]);
    
    return min_value;
}

lld abs_sum(lld *arr, int size){
    lld total = 0;
    
    for (int i=0; i<size; i++){
        arr[i] = abs(arr[i]);
        total += arr[i];
    }
    
    return total;
}


int main(void) {
    int t, n, size_odd, size_even, idx1, idx2;
    lld even_max, odd_min, total_even, total_odd;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        size_even = n/2, size_odd = n/2 + n%2, idx1 = 0, idx2 = 0;
        lld odd[size_odd], even[size_even];

        for (int i=1; i<=n; i++){
            if (i%2 == 0){
                scanf("%lld", &even[idx1]);
                idx1++;
            }
            else{
                scanf("%lld", &odd[idx2]);
                idx2++;
            }
        }
        
        total_even = abs_sum(even, size_even);
        total_odd = abs_sum(odd, size_odd);
        
        odd_min = get_min(odd, size_odd);
        even_max = get_max(even, size_even);
        
        if (odd_min < even_max){
            total_odd  += even_max - odd_min;
            total_even  -= even_max - odd_min;
        }
        
        printf("%lld\n", total_odd - total_even);
        
    }
    
	return 0;
}



