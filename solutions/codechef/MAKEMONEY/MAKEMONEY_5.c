// QUESTION URL: https://www.codechef.com/problems/MAKEMONEY
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, x, c, a, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &c);
        counter = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (x - a > c){
                a = x - c;
            }
            
            counter += a;
        }
        
        printf("%d\n", counter);
        
    }
    
	return 0;
}


