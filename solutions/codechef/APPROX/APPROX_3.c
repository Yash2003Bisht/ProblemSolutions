// DATE: 18/05/2023, 08:54:23
// PROBLEM NAME: Approximately
// PROBLEM URL: https://www.codechef.com/problems/APPROX
// PROBLEM DIFFICULTY RATTING: 1310
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, k, n, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &k);
        n = 103993, d = 33102;
        
        if (k == 0)
            printf("3\n");
        else{
            printf("3.");
            while(k--){
                n = (n%d)*10;
                printf("%d", n/d);
            }
            printf("\n");
        }
        
    }
    
	return 0;
}



