// QUESTION URL: https://www.codechef.com/problems/VDATES
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,d,l,r;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &d,&l,&r);
        if (d<l){
            printf("Too Early\n");
        } else if (d>r){
            printf("Too Late\n");
        } else{
            printf("Take second dose now\n");
        }
    }
	return 0;
}



