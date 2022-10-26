// QUESTION URL: https://www.codechef.com/problems/CFRTEST

#include <stdio.h>

int main(void) {
    int t,n,i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        
        for (i=0;  i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        for (i=0; i<n; i++){
            if (arr[i] != -1){
                for (int j=i+1; j<n; j++){
                    if (arr[i] == arr[j]){
                        n--;
                        arr[j] = -1;
                    }
                }
            }
        }
        
        printf("%d\n", n);
        
    }
    
	return 0;
}



