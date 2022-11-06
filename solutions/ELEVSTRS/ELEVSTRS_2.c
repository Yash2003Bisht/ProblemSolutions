// QUESTION URL: https://www.codechef.com/problems/ELEVSTRS
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t, n, v1, v2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &v1, &v2);
        // dust -> d = s*t
        // t = d/s
        float stairs = (n*1.4142)/v1;
        float elevator = (float) (2*n)/v2;
        
        if (stairs > elevator){
            printf("Elevator\n");
        } else{
            printf("Stairs\n");
        }
    }
	return 0;
}



