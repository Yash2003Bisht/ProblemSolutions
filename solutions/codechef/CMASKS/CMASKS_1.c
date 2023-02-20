// DATE: 02/11/2022, 03:46:07
// PROBLEM NAME: Chef and Masks
// PROBLEM URL: https://www.codechef.com/problems/CMASKS
// PROBLEM DIFFICULTY RATTING: 432
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
int main(void) 
{
	int t,i,x,a,b,y;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d %d", &x,&y);
	    a=x*100;
	    b=y*10;
	    if(a>=b)
	     printf("cloth\n");
	    else
	      printf("disposable\n");
	}
	return 0;
}



