// DATE: 22/07/2023, 08:32:54
// PROBLEM NAME: Array Halves
// PROBLEM URL: https://www.codechef.com/problems/ARRHALVES
// PROBLEM DIFFICULTY RATTING: 1407
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, size;
    long long int count;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        count = 0, size = n*2;
        int arr[size];

        for (int i=0; i<size; i++)
            scanf("%d", &arr[i]);
        
        for (int i=size-1; i>=0; i--){
            if (arr[i] > n){
                count += size - i - 1;
                size--;
            }
        }
        
        printf("%lld\n", count);

    }
    
	return 0;
}



