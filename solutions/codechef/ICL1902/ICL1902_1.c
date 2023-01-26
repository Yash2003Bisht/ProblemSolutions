// QUESTION URL: https://www.codechef.com/problems/ICL1902
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, square, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;
        
        while(n != 0){
            square = sqrt(n);
            n -= square * square;
            count++;
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
	
}



