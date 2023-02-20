// DATE: 15/02/2023, 08:04:47
// PROBLEM NAME: Doubled Distances
// PROBLEM URL: https://www.codechef.com/problems/DOUBLEDDIST
// PROBLEM DIFFICULTY RATTING: 1241
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void) {
    int t, n, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n];
        flag = 1;
        
        for (int i=0; i<n; i++) scanf("%lld", &a[i]);
        
        qsort(a, n, sizeof(long long int), cmpfunc);
        
        for (int i=1; i<n-1; i++){
            if (a[i]-a[i-1] != 2*(a[i+1]-a[i]) && 2*(a[i]-a[i-1]) != (a[i+1]-a[i])){
                flag = 0;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



