// QUESTION URL: https://www.codechef.com/problems/CHEFSLP
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n,l,p,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d",&n,&l,&x);
        p = n-l>l?l:n-l;
        printf("%d\n", p*x);
    }
	return 0;
}



