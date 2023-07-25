// DATE: 25/07/2023, 08:56:47
// PROBLEM NAME: Alternating subarray prefix
// PROBLEM URL: https://www.codechef.com/problems/ALTARAY
// PROBLEM DIFFICULTY RATTING: 1408
// STATUS: accepted
// TIME: 0.19
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n], counter[n];
        
        for (int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            counter[i] = 0;
        }
        
        // since this is the last index
        // so, there is no alternating subarray
        counter[n-1] = 1;

        for (int i=n-2; i>=0; i--){
            if ((arr[i] < 0 && arr[i+1] > 0) || (arr[i] > 0 && arr[i+1] < 0))
                counter[i] = counter[i+1] + 1;
            else
                counter[i] = 1;
        }
        
        for (int i=0; i<n; i++)
            printf("%d ", counter[i]);
        
        printf("\n");
        
    }
    
	return 0;
}



