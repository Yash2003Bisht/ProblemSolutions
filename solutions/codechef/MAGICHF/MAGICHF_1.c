// QUESTION URL: https://www.codechef.com/problems/MAGICHF
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,n,x,s,a,b,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n,&x,&s);
        for(i=0; i<s; i++){
            scanf("%d%d", &a,&b);
            if (a==x){
                x = b;
            } else if (b==x){
                x = a;
            }
        }
        printf("%d\n", x);
    }
	return 0;
}



