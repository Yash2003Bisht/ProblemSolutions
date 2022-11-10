// QUESTION URL: https://www.codechef.com/problems/DIVIDEMAKEEQ
// STATUS: accepted
// TIME: 0.27
// MEMORY: 5.2M

#include <stdio.h>

long long int min(long long int* arr, int size){
    long long int arr_min = arr[0];
    for (int i=0; i<size-1; i++){
        if (arr_min > arr[i+1])
            arr_min = arr[i+1];
    }
    
    return arr_min;
}

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n];
        
        for(int i=0; i<n; i++){
            scanf("%lld", &a[i]);
        }
        
        long long int min_arr = min(a, n);
        count = 0;
        
        for(int i=0; i<n; i++){
            if(a[i] != min_arr && a[i] % min_arr == 0)
                count++;
            else if (a[i] != min_arr){
                count = n;
                break;
            }
        }
        
        printf("%d\n", count);
        
    }
	return 0;
}



