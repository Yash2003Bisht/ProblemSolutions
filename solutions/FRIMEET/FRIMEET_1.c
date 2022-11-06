// QUESTION URL: https://www.codechef.com/problems/FRIMEET
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        printf(b>a?"NO\n":"YES\n");
    }
	return 0;
}



