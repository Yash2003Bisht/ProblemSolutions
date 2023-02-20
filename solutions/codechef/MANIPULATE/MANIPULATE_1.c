// DATE: 07/09/2022, 08:04:44
// PROBLEM NAME: Ezio and Guards
// PROBLEM URL: https://www.codechef.com/problems/MANIPULATE
// PROBLEM DIFFICULTY RATTING: 427
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

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



