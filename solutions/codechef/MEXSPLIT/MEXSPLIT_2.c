// DATE: 16/08/2023, 07:19:56
// PROBLEM NAME: Equal Mex Splitting
// PROBLEM URL: https://www.codechef.com/problems/MEXSPLIT
// PROBLEM DIFFICULTY RATTING: 1428
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.7M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, a, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count1 = 0, count2 = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a)
                count1++;
            else
                count2++;
        }
        
        printf("%d\n", max(count1, count2));
        
    }
    
	return 0;
}



