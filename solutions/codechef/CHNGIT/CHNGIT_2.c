// DATE: 20/10/2022, 07:25:39
// PROBLEM NAME: Change It
// PROBLEM URL: https://www.codechef.com/problems/CHNGIT
// PROBLEM DIFFICULTY RATTING: 1061
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t,n,count,temp_count, *arr;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        arr = (int *) malloc(n*sizeof(int)); 
        count = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        for (int i=0; i<n; i++){
            temp_count = 1;
            
            for (int j=i+1; j<n; j++){
                if (arr[i] == arr[j])
                    temp_count++;
            }
            
            if (temp_count > count)
                count = temp_count;
            
        }
        
        printf("%d\n", n-count);
        
    }
    
	return 0;
	
}



