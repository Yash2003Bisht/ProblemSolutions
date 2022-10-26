// QUESTION URL: https://www.codechef.com/problems/EQUALIZEAB

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t,a,b,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d", &a,&b,&x);
        if (abs(a-b)%2*x == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



