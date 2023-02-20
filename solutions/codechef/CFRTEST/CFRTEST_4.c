// DATE: 18/10/2022, 06:00:27
// PROBLEM NAME: Devu and friendship testing
// PROBLEM URL: https://www.codechef.com/problems/CFRTEST
// PROBLEM DIFFICULTY RATTING: 1061
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t,n,i,duplicate;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        
        for (i=0;  i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        duplicate = 0;
        
        for (i=0; i<n; i++){
            if (arr[i] != -1){
                for (int j=i+1; j<n; j++){
                    if (arr[i] == arr[j]){
                        duplicate++;
                        arr[j] = -1;
                    }
                }
            }
        }
        
        printf("%d\n", n - duplicate);
        
    }
    
	return 0;
}



