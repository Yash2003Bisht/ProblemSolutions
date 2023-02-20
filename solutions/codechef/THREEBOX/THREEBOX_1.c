// DATE: 26/09/2022, 05:39:27
// PROBLEM NAME: Three Boxes
// PROBLEM URL: https://www.codechef.com/problems/THREEBOX
// PROBLEM DIFFICULTY RATTING: 1183
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t,a,b,c,d;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a,&b,&c,&d);
        if (a+b+c <= d){
            printf("1\n");
        } else if(a+b <= d){
            printf("2\n");
        } else{
            printf("3\n");
        }
    }
	return 0;
}



