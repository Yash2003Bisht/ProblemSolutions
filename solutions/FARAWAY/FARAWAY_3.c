// QUESTION URL: https://www.codechef.com/problems/FARAWAY
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t ,n, m, a, b, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        total = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a <= m/2){
                b = m;
            } else{
                b = 1;
            }
            
            total += abs(a-b);
            
        }
        
        printf("%d\n", total);
        
        
    }
    
	return 0;
}



