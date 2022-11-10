// QUESTION URL: https://www.codechef.com/problems/TASTEDEC
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        if(2*x>5*y)
            printf("Chocolate");
        if(2*x<5*y)
            printf("Candy");
        if(2*x==5*y)
            printf("Either");
        putchar('\n');
    }
	
	return 0;
	
}



