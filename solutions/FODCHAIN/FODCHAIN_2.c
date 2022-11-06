// QUESTION URL: https://www.codechef.com/problems/FODCHAIN
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,e,k,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &e, &k);
        count = 0;
        
        while(e){
            count++;
            e /= k;
        }
        
        printf("%d\n", count);
        
    }
	return 0;
}



