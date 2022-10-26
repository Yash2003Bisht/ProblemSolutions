// QUESTION URL: https://www.codechef.com/problems/CHEFGAMES

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



