// QUESTION URL: https://www.codechef.com/problems/F1RULE
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &x,&y);
        if (y<=x+(x*7/100)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



