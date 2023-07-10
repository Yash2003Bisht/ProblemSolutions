// DATE: 08/07/2023, 07:50:26
// PROBLEM NAME: Maximise Score
// PROBLEM URL: https://www.codechef.com/problems/MAXIMSCORE
// PROBLEM DIFFICULTY RATTING: 1390
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#include <limits.h>
#include <math.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        count = INT_MAX;
        
        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        
        for (int i=1; i<n-1; i++){
            temp = max(abs(arr[i] - arr[i+1]), abs(arr[i] - arr[i-1]));
            count = min(count, temp);
        }
        
        count = min(count, abs(arr[0] - arr[1]));
        count = min(count, abs(arr[n-1] - arr[n-2]));

        printf("%d\n", count);
    }
    
	return 0;
}


