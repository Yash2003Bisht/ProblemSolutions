// QUESTION URL: https://www.codechef.com/problems/MASKPOL
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,a,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&a);
        if(n-a>a){
            printf("%d\n",a);
        } else{
            printf("%d\n",n-a);
        }
    }
	return 0;
}



