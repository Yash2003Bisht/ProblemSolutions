// QUESTION URL: https://www.codechef.com/problems/CMASKS
// STATUS: accepted

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



