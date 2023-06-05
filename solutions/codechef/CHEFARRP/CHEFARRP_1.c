// DATE: 05/06/2023, 08:18:35
// PROBLEM NAME: Chef and Subarrays
// PROBLEM URL: https://www.codechef.com/problems/CHEFARRP
// PROBLEM DIFFICULTY RATTING: 1041
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, sum, product, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        count = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        for (int i=0; i<n; i++){
            sum = 0, product = 1;
            for (int j=i; j<n; j++){
                sum += arr[j];
                product *= arr[j];
                
                if (sum == product)
                    count++;
                
            }
        }
        
        printf("%d\n", count);

    }
    
	return 0;
}



