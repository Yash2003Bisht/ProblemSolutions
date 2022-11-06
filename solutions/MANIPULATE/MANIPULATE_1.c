// QUESTION URL: https://www.codechef.com/problems/MANIPULATE
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&y);
        if(x<y){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
	return 0;
}



