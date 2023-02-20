// DATE: 02/11/2022, 02:38:09
// PROBLEM NAME: X Jumps
// PROBLEM URL: https://www.codechef.com/problems/XJUMP
// PROBLEM DIFFICULTY RATTING: 686
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    printf("%d\n",(x/y)+(x%y));
	}
	return 0;
}



