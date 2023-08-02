// DATE: 02/08/2023, 07:40:51
// PROBLEM NAME: Courses in an university
// PROBLEM URL: https://www.codechef.com/problems/UNICOURS
// PROBLEM DIFFICULTY RATTING: 1417
// STATUS: accepted
// TIME: 0.13
// MEMORY: 1.9M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, a, max_value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        max_value = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            max_value = max(max_value, a);
        }
        
        printf("%d\n", n - max_value);
        
    }
    
	return 0;
}



