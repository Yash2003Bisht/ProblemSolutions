// QUESTION URL: https://www.codechef.com/problems/EASYPERM
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        for (int i=n; i > 0; i--)
            printf("%d ", i);
        
        printf("\n");
    }
    
	return 0;
}



