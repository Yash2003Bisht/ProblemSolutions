// QUESTION URL: https://www.codechef.com/problems/SMOL
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        if (k==0){
            printf("%d\n", n);
        } else{
            printf("%d\n", n%k);
        }
    }
	return 0;
}



