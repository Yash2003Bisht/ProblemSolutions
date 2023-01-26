// QUESTION URL: https://www.codechef.com/problems/EXUNA
// STATUS: wrong answer
// TIME: 0.12
// MEMORY: 5.4M

#include <stdio.h>
#define MIN(a,b)(a>b?a:b)

int main(void) {
    int t,n,min_a=0,a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a<min_a || min_a == 0)
                min_a = a;
        }
        
        printf("%d\n", min_a);
        
    }
    
	return 0;
}



