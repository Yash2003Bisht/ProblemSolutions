// DATE: 27/03/2023, 08:09:07
// PROBLEM NAME: Reversal Sorting
// PROBLEM URL: https://www.codechef.com/problems/REVSORT
// PROBLEM DIFFICULTY RATTING: 1288
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long long int t, n, x, flag, temp, i;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &x);
        long long int a[n];
        flag = 1, i = 0;
        
        for (long long int i=0; i < n; i++)
            scanf("%lld", &a[i]);
        
        while(i < n-1){
            if (a[i] > a[i+1]){
                if (a[i] + a[i+1] <= x){
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                } else {
                    flag = 0;
                    break;
                }
            }
            
            i++;
            
        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



