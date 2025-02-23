// DATE: 16/11/2022, 06:29:44
// PROBLEM NAME: Chef and Strings
// PROBLEM URL: https://www.codechef.com/problems/CHEFSTR1
// PROBLEM DIFFICULTY RATTING: 1094
// STATUS: accepted
// TIME: 0.09
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int s[n], total=0;
        
        for (int i=0; i<n; i++)
            scanf("%lld", &s[i]);
            
        for (int i=0; i<n-1; i++){
            if (s[i+1] > s[i]) total += s[i+1]-s[i]-1;
            else total += s[i]-s[i+1]-1;
        }
        
        printf("%lld\n", total);
        
    }
    
	return 0;
}



