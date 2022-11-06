// QUESTION URL: https://www.codechef.com/problems/CFRTEST
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n,i,counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        counter = n;
        
        for (i=0;  i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        
        for (i=0; i<n; i++){
            if (arr[i] != -1){
                for (int j=i+1; j<n; j++){
                    if (arr[i] == arr[j]){
                        counter--;
                        arr[j] = -1;
                    }
                }
            }
        }
        
        printf("%d\n", counter);
        
    }
    
	return 0;
}



