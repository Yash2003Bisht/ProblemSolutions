// QUESTION URL: https://www.codechef.com/problems/BROKENPHONE

#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &x, &y);
        if (x<y){
            printf("REPAIR\n");
        } else if(y<x){
            printf("NEW PHONE\n");
        } else{
            printf("ANY\n");
        }
    }
	return 0;
}



