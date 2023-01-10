// QUESTION URL: https://www.codechef.com/problems/SIMPSTAT
// STATUS: accepted
// TIME: 0.21
// MEMORY: 5.3M

#include <stdio.h>

int compare (const void* a, const void* b){
  return ( *(int*)a - *( int*)b );
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
        qsort(arr, n, sizeof(int), compare);
        
        for (int i=k; i<n-k; i++) sum += arr[i];
        avg = sum / (n-2*k);
        
        printf("%.6lf\n", avg);
        
    }
	return 0;
}



