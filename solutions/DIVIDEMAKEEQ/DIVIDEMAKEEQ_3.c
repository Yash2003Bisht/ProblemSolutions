// QUESTION URL: https://www.codechef.com/problems/DIVIDEMAKEEQ
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n], min_arr = -1;
        
        for(int i=0; i<n; i++){
            scanf("%lld", &a[i]);
            
            if (min_arr == -1)
                min_arr = a[i];
            else if (min_arr > a[i])
                min_arr = a[i];
                
        }
        
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



