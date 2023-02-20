// DATE: 10/11/2022, 06:51:07
// PROBLEM NAME: Luigi and Uniformity
// PROBLEM URL: https://www.codechef.com/problems/DIVIDEMAKEEQ
// PROBLEM DIFFICULTY RATTING: 1185
// STATUS: accepted
// TIME: 0.27
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n], min_arr = -1, count=0;
        
        for(int i=0; i<n; i++){
            scanf("%lld", &a[i]);
            
            if (min_arr == -1)
                min_arr = a[i];
            else if (min_arr > a[i])
                min_arr = a[i];
                
        }
        
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



