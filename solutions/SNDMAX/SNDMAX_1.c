// QUESTION URL: https://www.codechef.com/problems/SNDMAX
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if ((a>b && a<c) || (a>c && a<b)){
            printf("%d\n", a);
        } else if((b>a && b<c) || (b>c && b<a)){
            printf("%d\n", b);
        } else{
            printf("%d\n", c);
        }
    }
	return 0;
}



