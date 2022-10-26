// QUESTION URL: https://www.codechef.com/problems/CHNGIT

#include <stdio.h>

int main(void) {
    int t,n,count,temp_count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n]; 
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



