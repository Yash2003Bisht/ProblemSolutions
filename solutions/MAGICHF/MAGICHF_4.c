// QUESTION URL: https://www.codechef.com/problems/MAGICHF
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t,n,x,s,a,b,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n,&x,&s);
        for(i=0; i<s; i++){
            scanf("%d%d", &a,&b);
            if (a!=x){
                x = a;
            } else{
                x = b;
            }
        }
        printf("%d\n", x);
    }
	return 0;
}



