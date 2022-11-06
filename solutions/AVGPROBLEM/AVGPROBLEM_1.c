// QUESTION URL: https://www.codechef.com/problems/AVGPROBLEM
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if ((float)(a+b)/2 > c){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



