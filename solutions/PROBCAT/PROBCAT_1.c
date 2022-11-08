// QUESTION URL: https://www.codechef.com/problems/PROBCAT
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if (x<100){
            printf("Easy\n");
        } else if (x<200){
            printf("Medium\n");
        } else{
            printf("Hard\n");
        }
    }
	return 0;
}



