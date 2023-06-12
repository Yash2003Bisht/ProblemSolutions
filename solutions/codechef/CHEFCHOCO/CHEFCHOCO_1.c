// DATE: 12/06/2023, 04:41:07
// PROBLEM NAME: Chef and Chocolates
// PROBLEM URL: https://www.codechef.com/problems/CHEFCHOCO
// PROBLEM DIFFICULTY RATTING: 492
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    // ================= TESTING SUBMISSION =================
    int i,t,c,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&c,&x,&y);
	    printf("%d\n",(c-x)*y);
	}
	return 0;
}



