// QUESTION URL: https://www.codechef.com/problems/NOTIME
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int n,h,x,t,y=0;
    scanf("%d%d%d", &n,&h,&x);
    int z = h-x;
    for (int i=0; i<n; i++){
        scanf("%d", &t);
        if (t>=z){
            y=1;
            break;
        }
    }
    if(y){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
	return 0;
}



