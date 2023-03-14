// DATE: 13/03/2023, 08:02:18
// PROBLEM NAME: Copy-Paste
// PROBLEM URL: https://www.codechef.com/problems/RRCOPY
// PROBLEM DIFFICULTY RATTING: 1280
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.6M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int b[1000000] = {0}, count = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (b[a] == 0){
                b[a] = 1;
                count++;
            }
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



