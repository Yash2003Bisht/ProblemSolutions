// QUESTION URL: https://www.codechef.com/problems/FLIPCARDS
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n,x,r;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&x);
        r = n-x;
        if (r<x){
            printf("%d\n", r);
        } else{
            printf("%d\n", x);
        }
    }
	return 0;
}



