// DATE: 18/09/2022, 02:56:01
// PROBLEM NAME: Chefland Games
// PROBLEM URL: https://www.codechef.com/problems/CHEFGAMES
// PROBLEM DIFFICULTY RATTING: 550
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, r[4];
    scanf("%d",&t);
    while(t--){
        int a=1;
        for (int i=0; i<4; i++){
            scanf("%d",&r[i]);
        }
        for (int i=0; i<4; i++){
            if(r[i] == 1){
                a = 0;
                printf("OUT\n");
                break;
            }
        }
        if(a){
            printf("IN\n");
        }
    }
	return 0;
}



