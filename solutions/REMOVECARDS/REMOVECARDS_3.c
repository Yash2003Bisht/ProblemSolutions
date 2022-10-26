// QUESTION URL: https://www.codechef.com/problems/REMOVECARDS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, max;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];
        
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        
        max = 0;
        
        for (int i=0; i<n; i++){
            int counter = 0;
            for (int j=0; j<n; j++){
                if (a[i] == a[j]){
                    counter++;
                }
            }
            
            if (counter > max){
                max = counter;
            }
        }
        
        printf("%d\n", n-max);
        
    }
	return 0;
}



