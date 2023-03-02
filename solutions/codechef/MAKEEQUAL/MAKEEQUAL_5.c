// DATE: 02/03/2023, 02:09:41
// PROBLEM NAME: Make them equal
// PROBLEM URL: https://www.codechef.com/problems/MAKEEQUAL
// PROBLEM DIFFICULTY RATTING: 1267
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>
#define min(a, b)(a>b ? b:a)
#define max(a, b)(a>b ? a:b)

int main(void) {
    int t, n, a, min_value, max_value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min_value = 0, max_value = 0;
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (max_value == 0){
                max_value = a;
            } else if (min_value == 0){
                min_value = min(a, max_value);
                max_value = max(a, max_value);
            }

            if (a > max_value)
                max_value = a;
            else if (a < min_value)
                min_value = a;

        }
        
        printf("%d\n", max_value - min_value);
            

        
    }
    
	return 0;
}



