// QUESTION URL: https://www.codechef.com/problems/THREEBOX

#include <stdio.h>

int main(void) {
    int t,a,b,c,d;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a,&b,&c,&d);
        if (a+b+c <= d){
            printf("1\n");
        } else if(a+b <= d){
            printf("2\n");
        } else{
            printf("3\n");
        }
    }
	return 0;
}



