// QUESTION URL: https://www.codechef.com/problems/FRIMEET
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if (b>a){
            printf("NO\n");
        } else{
            printf("YES\n");
        }
    }
	return 0;
}



