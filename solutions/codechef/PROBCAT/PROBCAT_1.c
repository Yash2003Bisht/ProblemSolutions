// QUESTION URL: https://www.codechef.com/problems/PROBCAT
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

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



