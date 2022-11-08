// QUESTION URL: https://www.codechef.com/problems/MXEVNSUB
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if (n*(n+1)/2 % 2 == 0){
            printf("%d\n", n);
        } else{
            printf("%d\n", n-1);
        }
        
    }
	return 0;
}



